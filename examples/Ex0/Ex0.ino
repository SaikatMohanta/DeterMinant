#include <DeterMinant.h>

DeterMinant determinant;

void setup() {
  Serial.begin(9600);

  // Calculate the determinant of a 2x2 matrix
  float det2x2 = determinant.calculate2x2(1, 2, 3, 4);
  Serial.print("Determinant of 2x2 matrix: ");
  Serial.println(det2x2);

  // Calculate the determinant of a 3x3 matrix
  float det3x3 = determinant.calculate3x3(1, 2, 3, 4, 5, 6, 7, 8, 9);
  Serial.print("Determinant of 3x3 matrix: ");
  Serial.println(det3x3);

  // Calculate the determinant of a 4x4 matrix
  float det4x4 = determinant.calculate4x4(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
  Serial.print("Determinant of 4x4 matrix: ");
  Serial.println(det4x4);
}

void loop() {
  // Your code here
}
