#!/bin/bash

# Script to deploy README files to GitHub repositories
# Run this script locally after cloning the cpp_modules repo

set -e  # Exit on error

echo "📚 Deploying README files to GitHub repositories"
echo "=================================================="
echo ""

GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
BLUE='\033[0;34m'
NC='\033[0m'

# Get the directory where this script is located
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
README_DIR="$SCRIPT_DIR/readmes_to_push"
TEMP_DIR="/tmp/github_readme_deploy"

# Check if README directory exists
if [ ! -d "$README_DIR" ]; then
    echo -e "${RED}Error: READMEs directory not found at $README_DIR${NC}"
    exit 1
fi

echo -e "${BLUE}Using READMEs from: $README_DIR${NC}"
echo ""

# Create temporary directory for cloning repos
mkdir -p "$TEMP_DIR"
cd "$TEMP_DIR"

# Repository mapping: filename -> repo_name
declare -A REPOS=(
    ["libft_README.md"]="libft"
    ["ft_printf_README.md"]="ft_printf"
    ["minitalk_README.md"]="minitalk"
    ["get_next_line_README.md"]="get_next_line"
    ["go-challenge_README.md"]="go-challenge"
    ["Projet_Python_README.md"]="Projet_Python"
)

# Function to deploy README to a repository
deploy_readme() {
    local readme_file=$1
    local repo_name=$2
    local repo_url="https://github.com/mozaBit/${repo_name}.git"

    echo -e "${YELLOW}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${NC}"
    echo -e "${YELLOW}Processing: ${repo_name}${NC}"
    echo -e "${YELLOW}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${NC}"

    # Clone the repository (or pull if already exists)
    if [ -d "$repo_name" ]; then
        echo -e "${BLUE}→ Repository already cloned, pulling latest changes...${NC}"
        cd "$repo_name"
        git pull origin master 2>/dev/null || git pull origin main 2>/dev/null || {
            echo -e "${RED}✗ Failed to pull latest changes${NC}"
            cd ..
            return 1
        }
    else
        echo -e "${BLUE}→ Cloning repository...${NC}"
        git clone "$repo_url" 2>&1 || {
            echo -e "${RED}✗ Failed to clone repository${NC}"
            return 1
        }
        cd "$repo_name"
    fi

    # Determine the default branch
    DEFAULT_BRANCH=$(git symbolic-ref refs/remotes/origin/HEAD | sed 's@^refs/remotes/origin/@@')
    echo -e "${BLUE}→ Default branch: ${DEFAULT_BRANCH}${NC}"

    # Check if README already exists
    if [ -f "README.md" ]; then
        echo -e "${YELLOW}⚠ README.md already exists in repository${NC}"
        read -p "Do you want to overwrite it? (y/N): " -n 1 -r
        echo
        if [[ ! $REPLY =~ ^[Yy]$ ]]; then
            echo -e "${YELLOW}⊘ Skipping ${repo_name}${NC}\n"
            cd ..
            return 0
        fi
    fi

    # Copy README
    echo -e "${BLUE}→ Copying README.md...${NC}"
    cp "$README_DIR/$readme_file" README.md

    # Add and commit
    echo -e "${BLUE}→ Committing changes...${NC}"
    git add README.md
    git commit -m "docs: add comprehensive README documentation

- Added detailed project overview and purpose
- Included installation and compilation instructions
- Documented features and technical details
- Added usage examples
- Enhanced repository documentation for portfolio use" || {
        echo -e "${YELLOW}⚠ No changes to commit (README might be identical)${NC}"
        cd ..
        return 0
    }

    # Push to remote
    echo -e "${BLUE}→ Pushing to GitHub...${NC}"
    git push origin "$DEFAULT_BRANCH" || {
        echo -e "${RED}✗ Failed to push to GitHub${NC}"
        echo -e "${YELLOW}  Please push manually or check your GitHub credentials${NC}"
        cd ..
        return 1
    }

    echo -e "${GREEN}✓ Successfully deployed README to ${repo_name}${NC}"
    echo ""

    cd ..
    return 0
}

# Deploy READMEs to all repositories
SUCCESS_COUNT=0
FAIL_COUNT=0
SKIP_COUNT=0

for readme_file in "${!REPOS[@]}"; do
    repo_name="${REPOS[$readme_file]}"

    if deploy_readme "$readme_file" "$repo_name"; then
        ((SUCCESS_COUNT++))
    else
        ((FAIL_COUNT++))
    fi
done

# Summary
echo ""
echo -e "${YELLOW}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${NC}"
echo -e "${GREEN}✅ Deployment Summary${NC}"
echo -e "${YELLOW}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${NC}"
echo -e "${GREEN}Successful: ${SUCCESS_COUNT}${NC}"
echo -e "${RED}Failed: ${FAIL_COUNT}${NC}"
echo -e "${YELLOW}Total: ${#REPOS[@]}${NC}"
echo ""

if [ $SUCCESS_COUNT -eq ${#REPOS[@]} ]; then
    echo -e "${GREEN}🎉 All READMEs deployed successfully!${NC}"
else
    echo -e "${YELLOW}⚠ Some READMEs were not deployed. Check the output above for details.${NC}"
fi

echo ""
echo -e "${BLUE}📝 Next steps:${NC}"
echo "   1. Check your repositories on GitHub"
echo "   2. Verify the READMEs look correct"
echo "   3. Run the cleanup script: ./github_cleanup_script.sh"
echo ""

# Cleanup
echo -e "${BLUE}Cleaning up temporary files...${NC}"
cd "$SCRIPT_DIR"
# Uncomment the next line if you want to auto-delete the temp directory
# rm -rf "$TEMP_DIR"
echo -e "${GREEN}Done! Temporary files are in: $TEMP_DIR${NC}"
