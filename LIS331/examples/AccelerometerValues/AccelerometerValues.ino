#include <LIS331.h>
#include <Wire.h>

LIS331 lis;
int val;

void setup() {
  Serial.begin(9600);
  lis.begin();
}
void loop() {
  val = lis.getXValue();
  Serial.print(val);
  Serial.print("\t");
  val = lis.getYValue();
  Serial.print(val);
  Serial.print("\t");
  val = lis.getZValue();
  Serial.print(val);
  Serial.println();
}

