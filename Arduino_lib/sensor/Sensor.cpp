#include "Sensor.h"
int S1 = 13;
int S2 = 12;
int S3 = 11;
int HT = 900;
int LT = 300;
int T = (HT + LT) / 2;
int i;
int Sensor_value_analog[8];
int Sensor_value_digital[8];
void SensorRead() {
  for (i = 0; i <= 7; i++) {
    digitalWrite(S1, i % 2);
    digitalWrite(S2, int(i / 2) % 2);
    digitalWrite(S3, int(int(i / 2) / 2));
    Sensor_value_analog[i] = analogRead(A0);

    if (Sensor_value_analog[i] > T) {
      Sensor_value_digital[i] = 1;
    }
    else if (Sensor_value_analog[i] < T) {
      Sensor_value_digital[i] = 0;
    }
  }
  for (int i = 0; i <= 7; i++) {
    Serial.print(Sensor_value_analog[i]);
    Serial.print("|");
    Serial.print(Sensor_value_digital[i]);
    Serial.print("  ");
  }
  Serial.println(" ");
}
