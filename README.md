# DeterMinant
Arduino library to evaluate Determinant of Metrices

The "DeterMinant" library is a custom Arduino library that provides functions for performing determinant math operations on matrices. It allows you to calculate the determinants of 2x2, 3x3, and 4x4 matrices.

The library consists of two files: "DeterMinant.h" and "DeterMinant.cpp".

In the "DeterMinant.h" file:
- The `#ifndef` and `#define` directives are used to prevent multiple inclusion of the header file.
- The necessary include statements are included, such as `Arduino.h`, to provide access to Arduino functions and data types.
- A class named `DeterMinant` is defined, which encapsulates the determinant operations.
- The public section of the class declares the constructor, destructor, and the determinant calculation functions for different matrix sizes.

In the "DeterMinant.cpp" file:
- The necessary include statement is added to include the "DeterMinant.h" header file.
- The constructor and destructor are defined. In this case, they are empty since no specific initialization or cleanup is required.
- The implementation of the determinant calculation functions is provided. Each function takes the matrix elements as input parameters and returns the calculated determinant.
  - The `calculate2x2` function calculates the determinant of a 2x2 matrix using the standard formula.
  - The `calculate3x3` function calculates the determinant of a 3x3 matrix using the expansion by minors formula.
  - The `calculate4x4` function calculates the determinant of a 4x4 matrix by recursively calculating the determinants of 3x3 submatrices.

To use the "DeterMinant" library in an Arduino sketch:
- Include the "DeterMinant.h" header file.
- Create an instance of the `DeterMinant` class.
- Call the desired determinant calculation function on the instance, passing the matrix elements as parameters.
- Use the calculated determinant as required.

The example sketch provided in the previous response demonstrates how to use the "DeterMinant" library to calculate determinants for matrices of different sizes (2x2, 3x3, and 4x4) and print the results using the Serial monitor.

By utilizing this library, you can easily perform determinant calculations in your Arduino projects without having to manually implement the formulas each time.
