#!/bin/bash

# Script to push README files to GitHub repositories

echo "📚 Pushing README files to GitHub repositories"
echo "==============================================="
echo ""

GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m'

# Function to push README to a repo
push_readme() {
    local repo_name=$1
    local local_path=$2
    local remote_url="http://local_proxy@127.0.0.1:16288/git/mozaBit/${repo_name}"

    echo -e "${YELLOW}Processing:${NC} $repo_name"

    # Navigate to the repo
    cd "$local_path" || {
        echo -e "${RED}✗ Failed to access $local_path${NC}\n"
        return 1
    }

    # Check if README.md exists
    if [ ! -f "README.md" ]; then
        echo -e "${RED}✗ README.md not found in $local_path${NC}\n"
        return 1
    fi

    # Configure git remote (in case it's not set)
    git remote remove origin 2>/dev/null
    git remote add origin "$remote_url" 2>/dev/null || git remote set-url origin "$remote_url"

    # Create a branch, add, commit, and push
    git checkout -b add-readme 2>/dev/null || git checkout add-readme
    git add README.md
    git commit -m "docs: add comprehensive README documentation

- Added detailed project overview
- Included installation and usage instructions
- Documented features and technical details
- Enhanced repository documentation"

    git push -u origin add-readme

    if [ $? -eq 0 ]; then
        echo -e "${GREEN}✓ Successfully pushed README to $repo_name${NC}"
        echo -e "${YELLOW}  Next: Create PR on GitHub to merge 'add-readme' branch${NC}\n"
    else
        echo -e "${RED}✗ Failed to push to $repo_name${NC}\n"
    fi

    cd - > /dev/null
}

echo "📋 Processing repositories..."
echo ""

# Push READMEs for each repo
push_readme "libft" "/tmp/repo_analysis/libft"
push_readme "ft_printf" "/tmp/repo_analysis/ft_printf"
push_readme "minitalk" "/tmp/repo_analysis/minitalk"
push_readme "get_next_line" "/tmp/repo_analysis/get_next_line"
push_readme "go-challenge" "/tmp/repo_analysis/go-challenge"
push_readme "Projet_Python" "/tmp/repo_analysis/Projet_Python"

echo ""
echo "📝 Pushing README for cpp_modules..."
echo ""

# For cpp_modules, we're already in the repo
cd /home/user/cpp_modules

# Check if we're on the correct branch
current_branch=$(git branch --show-current)
echo "Current branch: $current_branch"

# Add and commit README
git add README.md
git commit -m "docs: add comprehensive README for CPP modules

- Added overview of all CPP modules (00-09)
- Included compilation instructions
- Documented key concepts and learning outcomes
- Added 42 School context and resources"

# Push to current branch
git push -u origin "$current_branch"

if [ $? -eq 0 ]; then
    echo -e "${GREEN}✓ Successfully pushed README to cpp_modules${NC}\n"
else
    echo -e "${RED}✗ Failed to push to cpp_modules${NC}\n"
fi

echo ""
echo "✅ README push script completed!"
echo ""
echo "📌 Next steps:"
echo "1. Go to GitHub and create Pull Requests for the 'add-readme' branches"
echo "2. Merge the PRs to main/master branch"
echo "3. Delete the temporary 'add-readme' branches after merging"
echo ""
echo "🔗 Quick links to create PRs:"
echo "   - https://github.com/mozaBit/libft/compare/add-readme"
echo "   - https://github.com/mozaBit/ft_printf/compare/add-readme"
echo "   - https://github.com/mozaBit/minitalk/compare/add-readme"
echo "   - https://github.com/mozaBit/get_next_line/compare/add-readme"
echo "   - https://github.com/mozaBit/go-challenge/compare/add-readme"
echo "   - https://github.com/mozaBit/Projet_Python/compare/add-readme"
