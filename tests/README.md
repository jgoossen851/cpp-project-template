# `tests/`

Contents from the [Pitchfork standard](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.extras).

## Purpose

Directory for tests.

## Notes

This directory is not required.

The `tests/` directory is reserved for source files related to (non-unit) tests for the project.

The structure and layout of this directory is not prescribed by this document.

A project which can be embedded in another project (such as via [§ 2.6 external/](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs#tld.external)), must disable its `tests/` directory if it can detect that it is being built as an embedded sub-project.

Project maintainers must provide a way for consumers to disable the compilation and running of tests, especially for the purpose of embedding.