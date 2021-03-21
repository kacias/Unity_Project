# Changelog
All notable changes to this package will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

## [1.2.0] - 2020-03-19
### Changed
- Converted the package to use UIElements for the UI, dropping the UIWidgets dependency completely.
### Added
- The window reacts on the user's login and logout dynamically.
- Build output directory is now remembered even if the window is closed or the project is restarted.
Therefore, no new build is needed if the project is restarted without any changes.
- "Finish" button to go from the Success state to the Upload state.
- Editor Coroutines package as a dependency.
### Fixed
- All the states that have a thumbnail image now display the last valid thumbnail.
- User is now redirected to the Login state if the user signs out and then switches to another state.
- The name of the project is now remembered if you encounter an error while selecting the thumbnail.
- The game title was not set in certain cases.
- When the window is closed, the system stops checking if the user is logged in.

## [1.1.0] - 2020-03-16
### Changed
 - Raised the required Unity version to 2019.3.
### Fixed
- Null reference exception when `applicationIdentifier` not set in `ProjectSettings.asset`. Use `productName` as a fallback.

## [1.0.10] - 2020-02-24
### Added
 - Support for authorized URLs (Unity Connect auto-login).
 - Automatically log in the user when the URL for the shared game is clicked.
 - Open the shared game automatically in the web browser when the upload is completed.

## [1.0.9] - 2019-12-13
### Changed
- Upload metadata: use `applicationIdentifier` in `ProjectSettings.asset` for retrieving the Microgames's name.
### Fixed
- Upload metadata: fix obtaining the project's dependency packages for Unity 2019.2 and newer.

## [1.0.8] - 2019-12-10
### Changed
- Use `Application.companyName` (instead of `identifier`) for retrieving the Microgames's name for upload metadata.

## [1.0.7] - 2019-11-28
### Changed
- Updated UIWidgets dependency.

## [1.0.6] - 2019-11-14
### Changed
- Use *Share* as the window title.
- Minor wording adjustments.
### Added
- Save and load the state of the window upon assembly reloads.
- Add upload metadata (used Unity version & dependencies) to the WebGL build folder.

## [1.0.5] - 2019-08-14
- Send `buildGUID` to Connect backend.

## [1.0.4] - 2019-05-27
- Remove unused package files.
- Updated UIWidgets dependency.

## [1.0.3] - 2019-05-27
- Add WebGL game .zip size limit check (max. limit is 100 MB).

## [1.0.2] - 2019-05-22
- Update package name & description.
- Remove QAReport from the package.

## [1.0.1] - 2019-05-22
- Check the thumbnail image size.
    
## [1.0.0] - 2019-05-20
This is the first release the Unity package *Share WebGL Game*.
