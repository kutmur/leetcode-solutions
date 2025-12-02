# LeetCode Solutions

This repository contains a collection of LeetCode problems I have solved along with their solutions. The problems are categorized based on difficulty level: Easy, Medium, and Hard.

## Repository Structure

```
leetcode-solutions/
├── src/
│   ├── easy/          # Easy difficulty solutions (213 problems)
│   ├── medium/        # Medium difficulty solutions (149 problems)
│   ├── hard/          # Hard difficulty solutions (15 problems)
│   └── main.cpp       # Main entry point / template
├── CMakeLists.txt     # CMake build configuration
├── README.md          # This file
└── LICENSE            # Project license
```

## Solutions Overview

- **Easy**: 213 problems
- **Medium**: 149 problems  
- **Hard**: 15 problems
- **Total**: 377 solutions

Each solution consists of:
- **Header file** (`.h`): Contains the solution class definition
- **Implementation file** (`.cpp`): Contains the solution implementation
- Some solutions also include **SQL files** (`.sql`) for database problems

## Building and Testing

### Prerequisites

- C++17 compatible compiler (GCC, Clang, MSVC)
- CMake 3.10 or higher (optional)

### Building the Info Program

The repository includes a simple info program that can be built to verify the setup:

```bash
# Using CMake
mkdir build && cd build
cmake ..
cmake --build .
./leetcode_info       # On Linux/macOS
```

### Using the Solutions

This repository is a **reference library** for LeetCode solutions. The solutions are meant to be:

1. **Viewed on GitHub**: Browse solution files to understand the approach
2. **Copied to LeetCode**: Copy implementations directly into LeetCode's online editor
3. **Used as reference**: Review solution structures and algorithms

**Note**: Most implementation files (`.cpp`) contain commented code because solutions are designed for LeetCode's platform, not for local compilation. The header files (`.h`) show the method signatures and class structure.

## Code Organization

Each solution consists of:
- **Header file** (`.h`): Contains the solution class definition and method signatures
- **Implementation file** (`.cpp`): Contains commented reference implementations

**Important Note**: Most implementations in `.cpp` files are commented out, as these solutions are designed to be copied into LeetCode's online editor. The repository serves as an organized reference library rather than a fully compilable codebase. Each solution is meant to be used individually on LeetCode's platform.

## Repository History

This repository was refactored from a Visual Studio solution structure to a cleaner, cross-platform organization:
- Removed build artifacts and IDE-specific files
- Reorganized from nested `easy/easy/`, `medium/medium/` structure to flat `src/easy/`, `src/medium/` structure
- Added CMake support for cross-platform building
- Updated documentation with clear build instructions

## LeetCode Profile

For more explanations and detailed solutions, check out my [LeetCode profile](https://leetcode.com/u/kutmur/).

## Contributing

This is a personal solutions repository. While contributions are not expected, feel free to:
- Report issues or bugs
- Suggest optimizations
- Share alternative approaches

## License

See the [LICENSE](LICENSE) file for details.

---

**Note**: This repository is for educational purposes. Solutions are my own implementations and may not represent the optimal approach for all problems.
