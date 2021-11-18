## Dependencies

This project depends on the following packages:

* [Eigen3](https://eigen.tuxfamily.org/index.php?title=Main_Page)
  
  While Eigen is a header-only library, this template project demonstrates how to include the Eigen library as installed by CMake. Download the source for Eigen from the [Git repository](https://gitlab.com/libeigen/eigen.git), then install it to the system using CMake. From the Eigen repository's root directory, run:
  
  ```bash
  mkdir build && cd build/
  cmake ..
  sudo make install
  ```
  
  Then, the `Eigen3::Eigen` CMake target should be installed and able to be located using the `find_package()` command as documented in the Eigen documentation, [Using Eigen in CMake Projects](https://eigen.tuxfamily.org/dox/TopicCMakeGuide.html).
  
  Alternatively, a project could simply copy the `Eigen/` directory containing the header files to make use of the Eigen library.

## Submodules

This repository contains Git Submodules. After cloning the repository, run

```bash
git submodule update --init --recursive
```

to initialize and update the submodules.

## Layout Convention

This repo uses a modified [Pitchfork Layout (PFL)](https://github.com/vector-of-bool/pitchfork) convention for the project layout. See especially the README link to [the project layout conventions](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs) and the [2018 blog post](https://vector-of-bool.github.io/2018/09/16/layout-survey.html).

The modifications to the Pitchfork standard allow the user to have some preference for directory names. The underlying file structure follows PFL. Italicized entries are the names chosen for this repo. 

| Pitchfork      | Alternatives                                                 |
| -------------- | ------------------------------------------------------------ |
| *build*        | _build, bld                                                  |
| ***tests***    | test, testing                                                |
| ***examples*** | example, samples                                             |
| external       | extern, third-party, deps, dependencies, *exogenous*         |
| ***data***     | res, resources, dat                                          |
| ***tools***    | scripts                                                      |
| **docs**       | *doc*, documentation                                         |
| ***src***      | source                                                       |
| ***include***  | inc                                                          |
| libs           | library, units, trees, components, sections, parts, modules, subdivisions, mods, subdiv, lib, src-tree, *src-trees* |
| *extras*       | extra, optional                                              |

Each submodule under `libs/` or `extras/` can contain again the emboldened entries. (Here, I have also modified PFL to allow `tools/` to be included in a submodule.)

## Untracked/Absent Root Directories

### `build/`

Contents from the [Pitchfork standard](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.extras).

#### Purpose

A special directory that should not be considered part of the source of the project. Used for storing ephemeral build results. must not be checked into source control. If using source control, must be ignored using source control ignore-lists.

#### Notes

This directory is not required, but its name should be reserved.

The `build/` directory is special in that it must not be committed to a source control system. A user downloading the codebase should not see a `build/` directory present in the project root, but one may be created in the course of working with the software. The `_build/` directory is also reserved.

> Note: Some build systems may commandeer the `build/` directory for themselves. In this case, the directory `_build/` should be used in place of `build/`.

The `build/` directory may be used for ephemeral build results. Other uses of the directory are not permitted.

Creation of additional directories for build results in the root directory is not permitted.

> Note: Although multiple *root* directories are not allowed, the structure and layout of the `build/` directory is not prescribed. Multiple subdirectories of `build/` may be used to hold multiple build results of different configuration.

### `src/`

Contents from the [Pitchfork standard](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.extras).

#### Purpose

Main compilable source location. must be present for projects with compiled components that do not use submodules.

In the presence of [include/](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.include), also contains private headers.

#### Notes

> Note: The `src/` and [include/](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.include) directories are very closely related. Be sure to also read its section in addition to this one.

The purpose and content of `src/` depends on whether the project authors choose to follow [§ 3.1.2 Merged Header Placement](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#src.header-placement.merged) or [§ 3.1.1 Separate Header Placement](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#src.header-placement.separate).

See [§ 3 Library Source Layout](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#src).

### `include/`

Contents from the [Pitchfork standard](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.extras).

#### Purpose

Directory for public headers. may be present. may be omitted for projects that do not distinguish between private/public headers. may be omitted for projects that use submodules.

#### Notes

> Note: The `include/` and [src/](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.src) directories are very closely related. Be sure to also read its section in addition to this one.

The purpose of the `include/` directory is to hold *public API* headers.

The `include/` directory should not be used if using [§ 3.1.2 Merged Header Placement](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#src.header-placement.merged).

See [§ 3 Library Source Layout](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#src).