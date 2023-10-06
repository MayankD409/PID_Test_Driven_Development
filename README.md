# PID_Test_Driven Development

![CICD Workflow status](https://github.com/MayankD049/PID_Test_Driven_Development/actions/workflows/run-unit-test-and-upload-codecov.yml/badge.svg) [![codecov](https://codecov.io/gh/MayankD409/PID_Test_Driven_Development/graph/badge.svg?token=WUFHUBTG05)](https://codecov.io/gh/MayankD409/PID_Test_Driven_Development) [![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

## Group Details 

| Team 1 |
|---|
| `Mayank Deshpande` (Driver)|
| `Fabrizio Coronado` (Navigator)|

## Standard install via command-line
```bash
# Download the code:
  git clone https://github.com/MayankD409/PID_Test_Driven_Development.git
  cd PID_Test_Driven_Development
# Build the project
  cmake -S ./ -B build/
  cmake --build build/
# Run program:
  ./build/app/shell-app
# Run tests:
  cd build/; ctest; cd -
  # or if you have newer cmake
  ctest --test-dir build/
# Build docs for Doxygen format:
  cmake --build build/ --target docs
  # open a web browser to browse the doc
  open docs/html/index.html

```

## Building for code coverage

```bash
# if you don't have gcovr or lcov installed, do:
  sudo apt-get install gcovr lcov
# Set the build type to Debug and WANT_COVERAGE=ON
  cmake -D WANT_COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug -S ./ -B build/
# Now, do a clean compile, run unit test, and generate the covereage report
  cmake --build build/ --clean-first --target all test_coverage
# open a web browser to browse the test coverage report
  open build/test_coverage/index.html

This generates a index.html page in the build/test_coverage sub-directory that can be viewed locally in a web browser.
```

## UML DIAGRAM

## ACTIVITY DIAGRAM

