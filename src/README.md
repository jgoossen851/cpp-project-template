# `src/`

Contents from the [Pitchfork standard](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.extras).

## Purpose

Main compilable source location. must be present for projects with compiled components that do not use submodules.

In the presence of [include/](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.include), also contains private headers.

## Notes

> Note: The `src/` and [include/](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.include) directories are very closely related. Be sure to also read its section in addition to this one.

The purpose and content of `src/` depends on whether the project authors choose to follow [§ 3.1.2 Merged Header Placement](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#src.header-placement.merged) or [§ 3.1.1 Separate Header Placement](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#src.header-placement.separate).

See [§ 3 Library Source Layout](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#src).