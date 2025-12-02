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
- CMake 3.10 or higher (optional, for cross-platform builds)

### Using CMake (Recommended)

```bash
# Create a build directory
mkdir build && cd build

# Generate build files
cmake ..

# Build the project
cmake --build .

# Run the info program
./leetcode_info       # On Linux/macOS
leetcode_info.exe     # On Windows
```

### Testing Individual Solutions

Since all solution classes are named `Solution`, they cannot be compiled together. To test a specific solution:

1. **Create a test file** (e.g., `test_problem_1.cpp`):

```cpp
#include <iostream>
#include <vector>
#include "easy/S_1.h"

int main() {
    Solution sol;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = sol.twoSum(nums, target);
    
    std::cout << "Result: [" << result[0] << ", " << result[1] << "]" << std::endl;
    return 0;
}
```

2. **Compile with g++**:

```bash
g++ -std=c++17 -I src test_problem_1.cpp src/easy/S_1.cpp -o test_problem_1
./test_problem_1
```

3. **Or add to CMakeLists.txt**:

```cmake
add_executable(test_problem_1 test_problem_1.cpp src/easy/S_1.cpp)
```

### Alternative: Direct Compilation

You can compile any solution directly:

```bash
# Example: Compile problem 412 (FizzBuzz)
g++ -std=c++17 -I src -c src/easy/S_412.cpp -o S_412.o
```

## Code Organization

Each solution follows the LeetCode structure:
- Class name: `Solution`
- Method names match the LeetCode problem
- Standard library includes as needed

**Note**: The solutions are designed to be copied directly into LeetCode's editor. The repository structure provides organization and version control.

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
