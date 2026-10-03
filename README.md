# SetOps

A small C++20 console application that visualizes set operations using
64-bit unsigned integers. Each bit represents one element of a set.

The program demonstrates:

- intersection
- union
- difference
- complement

## Build

```powershell
cmake -S . -B build
cmake --build build
```

## Run

```powershell
./build/src/setvis.exe
```

The example sets are defined in `src/main.cpp`.
