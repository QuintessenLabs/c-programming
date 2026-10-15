@echo off
setlocal

:: Move to the repository folder where this script lives
cd /d "%~dp0"

echo ===================================================
echo           Updating GitHub Repository
echo ===================================================
echo.

echo [1/4] Checking changed files...
git status -s
echo.

:: Set a reliable default message first
set "commit_msg=Update %date% %time%"

:: Ask user for custom message
set "user_input="
set /p "user_input=Enter commit message (Press Enter for default): "

if defined user_input (
    set "commit_msg=%user_input%"
)

echo.
echo [2/4] Staging all changes (git add -A)...
git add -A

echo.
echo [3/4] Committing changes with message: "%commit_msg%"
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
    echo    ERROR: Push or commit failed.
    echo ===================================================
)

echo.
pause
