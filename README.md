# Hello World – Group Gamma

This repo hosts our microcontroller "Hello World" submission and the GitHub collaboration workflow for ECE 1895.

## Team & Branching
- Owner: <name> (keeps `main` stable)
- Contributors: open a feature branch named `feat/name-comment-<yourname>`

## How to Contribute
1. Fork this repo.
2. Create a branch `feat/name-comment-<yourname>`.
3. Edit `src/main.*` and add your name comment at the top.
4. Commit & push; open a Pull Request to `<owner>/mcu-hello-world-teamX:main`.

## Sync Your Fork
```bash
git remote add upstream https://github.com/<owner>/mcu-hello-world-teamX.git
git fetch upstream
git checkout main
git merge upstream/main && git push
