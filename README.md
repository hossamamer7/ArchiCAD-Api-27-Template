# Archicad Add-On CMake Template

This is a template for create Addon on ArchiCAD 27.

## Prerequisites

- Development environment:
  - Windows: [Visual Studio](https://visualstudio.microsoft.com/downloads/)
  - MacOS: [Xcode](https://developer.apple.com/xcode/resources/)
- [CMake](https://cmake.org) (3.16 minimum version is needed).
- [Python](https://www.python.org) for resource compilation and build script usage (3.8+).

## Config file

The build script reads the config.json file for additional build parameters:

- addOnName: name of the Add-On.
- defaultLanguage: a single language for which the Add-On is built when localization is not enabled.
- languages: list of languages, for which localization can be done / for which the .grc files are present in their respective directories.
- additionalCMakeParams (optional): a list of additional Add-On specific CMake parameters as key=value pairs. The build script will forward it to CMake.

See the example [config.json](https://github.com/GRAPHISOFT/archicad-addon-cmake/blob/master/config.json).

## Detailed instructions

If the provided build script doesn't work for you, you can set up your environment manually.

## Addon ID
You need to change the Developer ID and Local ID for MDID in AddOnFix.grc by yours.
 check this link:
 https://archicadapi.graphisoft.com/how-to-get-mdid-for-my-add-on

## Admin
You need to run visual studio as admin to copy Addon Files

