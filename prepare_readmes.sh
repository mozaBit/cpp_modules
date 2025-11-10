#!/bin/bash

# Script to prepare README files for manual deployment
# This script clones repos and adds READMEs, but YOU commit/push manually

echo "📚 Preparing README files for deployment"
echo "========================================="
echo ""

GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
BLUE='\033[0;34m'
NC='\033[0m'

# Get the directory where this script is located
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
README_DIR="$SCRIPT_DIR/readmes_to_push"
WORK_DIR="$HOME/github_repos_to_push"

# Check if README directory exists
if [ ! -d "$README_DIR" ]; then
    echo -e "${RED}Error: READMEs directory not found at $README_DIR${NC}"
    exit 1
fi

echo -e "${BLUE}Using READMEs from: $README_DIR${NC}"
echo -e "${BLUE}Working directory: $WORK_DIR${NC}"
echo ""

# Create working directory
mkdir -p "$WORK_DIR"
cd "$WORK_DIR"

# Repository mapping: filename -> repo_name
declare -A REPOS=(
    ["libft_README.md"]="libft"
    ["ft_printf_README.md"]="ft_printf"
    ["minitalk_README.md"]="minitalk"
    ["get_next_line_README.md"]="get_next_line"
    ["go-challenge_README.md"]="go-challenge"
    ["Projet_Python_README.md"]="Projet_Python"
)

# Function to prepare a repository
prepare_repo() {
    local readme_file=$1
    local repo_name=$2
    local repo_url="https://github.com/mozaBit/${repo_name}.git"

    echo -e "${YELLOW}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${NC}"
    echo -e "${YELLOW}Processing: ${repo_name}${NC}"
    echo -e "${YELLOW}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${NC}"

    # Clone the repository if not already cloned
    if [ -d "$repo_name" ]; then
        echo -e "${BLUE}→ Repository already exists, skipping clone...${NC}"
        cd "$repo_name"
        git pull origin master 2>/dev/null || git pull origin main 2>/dev/null || true
    else
        echo -e "${BLUE}→ Cloning repository...${NC}"
        git clone "$repo_url" || {
            echo -e "${RED}✗ Failed to clone repository${NC}\n"
            return 1
        }
        cd "$repo_name"
    fi

    # Determine the default branch
    DEFAULT_BRANCH=$(git symbolic-ref refs/remotes/origin/HEAD 2>/dev/null | sed 's@^refs/remotes/origin/@@' || echo "master")
    echo -e "${BLUE}→ Default branch: ${DEFAULT_BRANCH}${NC}"

    # Copy README
    echo -e "${BLUE}→ Adding README.md...${NC}"
    cp "$README_DIR/$readme_file" README.md

    echo -e "${GREEN}✓ README ready in: $WORK_DIR/$repo_name${NC}"
    echo -e "${YELLOW}  Next: cd $WORK_DIR/$repo_name && git add README.md && git commit -m 'docs: add README' && git push${NC}"
    echo ""

    cd ..
    return 0
}

# Prepare all repositories
SUCCESS_COUNT=0
FAIL_COUNT=0

for readme_file in "${!REPOS[@]}"; do
    repo_name="${REPOS[$readme_file]}"

    if prepare_repo "$readme_file" "$repo_name"; then
        ((SUCCESS_COUNT++))
    else
        ((FAIL_COUNT++))
    fi
done

# Summary
echo ""
echo -e "${YELLOW}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${NC}"
echo -e "${GREEN}✅ Preparation Summary${NC}"
echo -e "${YELLOW}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${NC}"
echo -e "${GREEN}Prepared: ${SUCCESS_COUNT}${NC}"
echo -e "${RED}Failed: ${FAIL_COUNT}${NC}"
echo -e "${YELLOW}Total: ${#REPOS[@]}${NC}"
echo ""

if [ $SUCCESS_COUNT -eq ${#REPOS[@]} ]; then
    echo -e "${GREEN}🎉 All READMEs prepared successfully!${NC}"
else
    echo -e "${YELLOW}⚠ Some READMEs were not prepared. Check the output above for details.${NC}"
fi

echo ""
echo -e "${BLUE}📝 Next steps - Commit and push manually:${NC}"
echo ""
echo "cd $WORK_DIR"
echo ""

for readme_file in "${!REPOS[@]}"; do
    repo_name="${REPOS[$readme_file]}"
    if [ -d "$WORK_DIR/$repo_name" ]; then
        echo "# For $repo_name:"
        echo "cd $repo_name"
        echo "git add README.md"
        echo "git commit -m 'docs: add comprehensive README documentation'"
        echo "git push origin master  # or main, depending on your default branch"
        echo "cd .."
        echo ""
    fi
done

echo -e "${YELLOW}Or use this one-liner to commit and push all at once:${NC}"
echo ""
echo "cd $WORK_DIR && for repo in libft ft_printf minitalk get_next_line go-challenge Projet_Python; do (cd \$repo && git add README.md && git commit -m 'docs: add comprehensive README' && git push) || true; done"
echo ""
echo -e "${GREEN}Done! All repos are in: $WORK_DIR${NC}"
