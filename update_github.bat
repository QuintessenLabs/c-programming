@echo off
setlocal enabledelayedexpansion

:: Move to the repository folder
cd /d "%~dp0"

echo ===================================================
echo           Updating GitHub Repository
echo ===================================================
echo.

:: Check current git status
echo [1/4] Checking changed files...
git status -s
echo.

:: Prompt for commit message (or use default with timestamp)
set /p commit_msg="Enter commit message (Press Enter for 'Auto update: %date% %time%'): "

if "%commit_msg%"=="" (
    set commit_msg=Auto update: %date% %time%
)

echo.
echo [2/4] Staging files (git add .)...
git add .

echo.
echo [3/4] Committing changes...
git commit -m "%commit_msg%"

echo.
echo [4/4] Pushing to GitHub (origin main)...
git push origin main

echo.
if %errorlevel% equ 0 (
    echo ===================================================
    echo    SUCCESS: Repository updated successfully!
    echo ===================================================
) else (
    echo ===================================================
    echo    ERROR: Push failed! Check your connection or git credentials.
    echo ===================================================
)

echo.
pause

