# `include/`

Contents from the [Pitchfork standard](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.extras).

## Purpose

Directory for public headers. may be present. may be omitted for projects that do not distinguish between private/public headers. may be omitted for projects that use submodules.

## Notes

> Note: The `include/` and [src/](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.src) directories are very closely related. Be sure to also read its section in addition to this one.

The purpose of the `include/` directory is to hold *public API* headers.

The `include/` directory should not be used if using [§ 3.1.2 Merged Header Placement](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#src.header-placement.merged).

See [§ 3 Library Source Layout](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#src).