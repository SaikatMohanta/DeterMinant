#ifndef DeterMinant_h
#define DeterMinant_h

#include <Arduino.h>

class DeterMinant {
public:
  // Constructor
  DeterMinant();

  // Destructor
  ~DeterMinant();

  // Calculate the determinant of a 2x2 matrix
  float calculate2x2(float a, float b, float c, float d);

  // Calculate the determinant of a 3x3 matrix
  float calculate3x3(float a, float b, float c, float d, float e, float f, float g, float h, float i);

  // Calculate the determinant of a 4x4 matrix
  float calculate4x4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p);
};

#endif
