# GitHub Pages Setup

## Files to publish
- `index.html`
- `images/` folder (including your 11 image files)

## Steps
1. Create a new GitHub repository (public).
2. Upload `index.html` and the full `images/` folder.
3. In repository settings: `Settings` -> `Pages`.
4. Under `Build and deployment`:
   - Source: `Deploy from a branch`
   - Branch: `main` and folder `/ (root)`
5. Click `Save`.
6. Wait 1-3 minutes, then open the generated URL:
   - `https://<your-github-id>.github.io/<repo-name>/`

## Important
- Do not use local paths like `C:\...` for images in published pages.
- This project already uses relative paths (`images/...`) and is ready for GitHub Pages.
