
---

# 🧠 Git Command Cheat-Sheet 

📄 **`docs/git_cheatsheet.md`**

```md
# 🧾 Git Command Cheat Sheet

## Basic Workflow

git status  
git add .  
git commit -m "Meaningful message"  
git push  

## First Time Setup

git init  
git remote add origin <repo_url>  
git branch -M main  
git push -u origin main  

## Branching

git branch  
git branch feature-x  
git checkout feature-x  
git merge feature-x  

## Undo & Fix

git restore <file>  
git reset --soft HEAD~1  
git reset --hard HEAD  

## Inspection

git log --oneline  
git diff  
git show <commit>

## Init & Clone
git init
git clone <repo>

## Add & Commit
git add .
git commit -m "message"

## Push / Pull
git push
git pull

## Branch
git branch
git branch -m main

## Submodules
git submodule add <repo> <path>
git submodule update --init --recursive