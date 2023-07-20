#include "motor_speed.h"
void motor(int a, int b) {
  int MLP = 3;
  int MLN = 4;
  int MRP = 5;
  int MRN = 6;
  if (a > 0) {
    analogWrite(MLP, a);
    analogWrite(MLN, 0);
  }
  if (a <= 0) {
    analogWrite(MLP, 0);
    analogWrite(MLN, (-1)*a);
  }
  if (b > 0) {
    analogWrite(MRP, b);
    analogWrite(MRN, 0);
  }
  if (b <= 0) {
    analogWrite(MRP, 0);
    analogWrite(MRN, (-1)*b);
  }
}
