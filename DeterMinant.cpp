#include "DeterMinant.h"

// Constructor
DeterMinant::DeterMinant() {}

// Destructor
DeterMinant::~DeterMinant() {}

// Calculate the determinant of a 2x2 matrix
float DeterMinant::calculate2x2(float a, float b, float c, float d) {
  return (a * d) - (b * c);
}

// Calculate the determinant of a 3x3 matrix
float DeterMinant::calculate3x3(float a, float b, float c, float d, float e, float f, float g, float h, float i) {
  return (a * ((e * i) - (f * h))) - (b * ((d * i) - (f * g))) + (c * ((d * h) - (e * g)));
}

// Calculate the determinant of a 4x4 matrix
float DeterMinant::calculate4x4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p) {
  float minor1 = calculate3x3(f, g, h, j, k, l, n, o, p);
  float minor2 = calculate3x3(e, g, h, i, k, l, m, o, p);
  float minor3 = calculate3x3(e, f, h, i, j, l, m, n, p);
  float minor4 = calculate3x3(e, f, g, i, j, k, m, n, o);

  return (a * minor1) - (b * minor2) + (c * minor3) - (d * minor4);
}
