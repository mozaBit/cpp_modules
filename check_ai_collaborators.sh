#!/bin/bash

# Script to check for AI collaborators and AI-related content in GitHub repos

echo "🤖 Checking for AI marks in GitHub repositories"
echo "================================================"
echo ""

GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m'

# List of repos to check (after cleanup)
REPOS=(
    "cpp_modules"
    "libft"
    "ft_printf"
    "minitalk"
    "get_next_line"
    "go-challenge"
    "Projet_Python"
    "mozaBit"
    "mozaBit.github.io"
)

echo "📋 Checking collaborators for AI assistants..."
echo ""

for repo in "${REPOS[@]}"; do
    echo -e "${YELLOW}Checking:${NC} mozaBit/$repo"

    # Check collaborators
    collaborators=$(gh api "repos/mozaBit/$repo/collaborators" 2>/dev/null)

    if [ $? -eq 0 ]; then
        # Check if any collaborator name contains AI-related terms
        ai_found=$(echo "$collaborators" | grep -iE "claude|copilot|gpt|assistant|ai|bot" || echo "")

        if [ -z "$ai_found" ]; then
            echo -e "${GREEN}✓ No AI collaborators found${NC}"
        else
            echo -e "${RED}⚠ Potential AI collaborator found!${NC}"
            echo "$ai_found"
            echo -e "${YELLOW}  To remove: gh api -X DELETE repos/mozaBit/$repo/collaborators/USERNAME${NC}"
        fi
    else
        echo -e "${YELLOW}! Could not check collaborators (may be private or no access)${NC}"
    fi

    echo ""
done

echo ""
echo "📋 Checking commit messages for AI references..."
echo ""

for repo in "${REPOS[@]}"; do
    echo -e "${YELLOW}Checking:${NC} mozaBit/$repo"

    # Clone or navigate to repo
    if [ -d "/tmp/ai_check/$repo" ]; then
        cd "/tmp/ai_check/$repo"
        git pull -q origin main 2>/dev/null || git pull -q origin master 2>/dev/null
    else
        mkdir -p "/tmp/ai_check"
        cd "/tmp/ai_check"
        git clone -q "https://github.com/mozaBit/$repo.git" 2>/dev/null
        cd "$repo" 2>/dev/null
    fi

    if [ $? -eq 0 ]; then
        # Search for AI-related commit messages
        ai_commits=$(git log --all --oneline | grep -iE "AI|assistant|claude|gpt|copilot|chatgpt" || echo "")

        if [ -z "$ai_commits" ]; then
            echo -e "${GREEN}✓ No AI-related commit messages found${NC}"
        else
            echo -e "${RED}⚠ AI-related commits found:${NC}"
            echo "$ai_commits"
            echo -e "${YELLOW}  Consider using interactive rebase to reword these commits${NC}"
        fi
    else
        echo -e "${YELLOW}! Could not clone repo (may be private)${NC}"
    fi

    echo ""
done

echo ""
echo "✅ AI marks check completed!"
echo ""
echo "📌 Summary:"
echo "   - Checked ${#REPOS[@]} repositories for AI collaborators"
echo "   - Checked commit history for AI references"
echo ""
echo "🔧 To remove AI collaborators:"
echo "   gh api -X DELETE repos/mozaBit/REPO_NAME/collaborators/AI_USERNAME"
echo ""
echo "🔧 To reword commits with AI references:"
echo "   1. git rebase -i HEAD~N  (where N is number of commits back)"
echo "   2. Change 'pick' to 'reword' for commits to change"
echo "   3. Save and edit the commit messages"
echo "   4. git push --force-with-lease"
