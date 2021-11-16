# `exogenous/`

Contents from the [Pitchfork standard](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.extras).

## Purpose

Directory for packages/projects to be used by the project, but not edited as part of the project.

## Notes

This directory is not required.

The `external/` directory is reserved for embedding of external projects. Each embedded project should occupy a single subdirectory of `external/`.

`external/` should not contain files other than those required by tooling.

This directory may be automatically populated, either partially or completely, by tools (eg. `git` submodules) as part of a build process. In this case, projects must declare the auto-populated subdirectories as ignored by relevant source control systems.

Subdirectories of `external/` should not be modified as part of regular project development. Subdirectories should remain as close to their upstream source as possible.