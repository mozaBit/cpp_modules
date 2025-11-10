#!/bin/bash

# GitHub Account Cleanup Script
# This script will delete unfinished, learning, and duplicate repos

echo "🧹 GitHub Account Cleanup Script"
echo "================================"
echo ""

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Function to delete a repo
delete_repo() {
    local repo=$1
    local reason=$2
    echo -e "${YELLOW}Deleting:${NC} $repo"
    echo -e "${YELLOW}Reason:${NC} $reason"
    gh repo delete "mozaBit/$repo" --yes
    if [ $? -eq 0 ]; then
        echo -e "${GREEN}✓ Successfully deleted mozaBit/$repo${NC}\n"
    else
        echo -e "${RED}✗ Failed to delete mozaBit/$repo${NC}\n"
    fi
}

# Function to rename a repo
rename_repo() {
    local old_name=$1
    local new_name=$2
    echo -e "${YELLOW}Renaming:${NC} $old_name -> $new_name"
    gh repo rename "$new_name" --repo "mozaBit/$old_name"
    if [ $? -eq 0 ]; then
        echo -e "${GREEN}✓ Successfully renamed mozaBit/$old_name to mozaBit/$new_name${NC}\n"
    else
        echo -e "${RED}✗ Failed to rename mozaBit/$old_name${NC}\n"
    fi
}

echo "📋 STEP 1: Deleting unfinished public repos"
echo "--------------------------------------------"
delete_repo "Philosophers" "Unfinished - 'Before a massive restart' commit, debug code present"
delete_repo "so_long" "Unfinished - Bonus is empty stub, incomplete implementation"
delete_repo "push_swap" "Unfinished - Had segfaults, no bonus/checker"

echo ""
echo "📋 STEP 2: Deleting learning/draft repos"
echo "--------------------------------------------"
delete_repo "web_draft" "Draft/learning repo"
delete_repo "git" "Learning repo"
delete_repo "docker" "Learning repo"
delete_repo "nextjsLearning" "Learning repo"
delete_repo "competitive_programming" "Practice/learning repo"

echo ""
echo "📋 STEP 3: Handling duplicate repos (re* versions)"
echo "--------------------------------------------"
echo "⚠️  Please manually check these repos and decide:"
echo ""
echo "For re_minishell:"
echo "  - If FINISHED: run: gh repo rename minishell --repo mozaBit/re_minishell"
echo "  - If UNFINISHED: run: gh repo delete mozaBit/re_minishell --yes"
echo ""
echo "For re_philosophers:"
echo "  - If FINISHED: run: gh repo rename philosophers --repo mozaBit/re_philosophers"
echo "  - If UNFINISHED: run: gh repo delete mozaBit/re_philosophers --yes"
echo ""
echo "For original minishell (if re_minishell is the finished one):"
echo "  - Run: gh repo delete mozaBit/minishell --yes"
echo ""

# Uncomment these if you know the status:
# delete_repo "re_minishell" "Unfinished redo"
# delete_repo "re_philosophers" "Unfinished redo"
# delete_repo "minishell" "Original unfinished version (re_minishell is the finished one)"

echo ""
echo "✅ Cleanup script completed!"
echo ""
echo "📝 Next steps:"
echo "1. Review the repos that still exist"
echo "2. Run the README creation script to add documentation"
echo "3. Check for AI collaborators manually on GitHub web interface"
