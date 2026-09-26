# Backtester

Backtester is a program that lets the user test their strategies against historical market data.

## Features (Expected)

* Plug-and-play strategy testing
* Data ingestion through APIs and CSVs
* Limit order book simulation and queue modelling

## Requirements

* GCC/Clang or any C compiler
* CMake
* GoogleTest

# Run Instructions

```
cmake --preset release
cmake --build --preset release
ctest --preset release
```
