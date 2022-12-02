# Advent of Code 2022

## Requirements

Requires `g++`, `cmake`, and `libgtest-dev`.

## Build and run

### Build

The program can be built by running the following command.

```bash
mkdir -p build && cd build
cmake ../
make
```

### Run

The program can be run after building it by running the following command.

```bash
# in ./build directory
./main
```

### Test

Unit tests can be performed by running the following commands.

```bash
# in ./build directory
./runTests
```

## Scripts

The following scripts are provided for convention.

### Build & Run

```bash
./scripts/run.sh
```

### Build & Test

```bash
./scripts/test.sh
```

## Additional commands

### Fix scripts mode

```bash
chmod +x scripts/*
```
