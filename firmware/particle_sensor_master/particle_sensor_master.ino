#include <Wire.h>

void setup()
{
 Wire.begin(); // join i2c bus (address optional for master)
 Serial.begin(9600); // start serial for output
 delay(200);
 Serial.println("Serial started...");
}
int data[4];
int PM25;
int PM10;

void loop() {
    Serial.println("Requesting measurement from particle sensor...");
    Wire.requestFrom(4, 4); // request 4 bytes from slave device address 4
    data[0] = Wire.read();
    data[1] = Wire.read();
    data[2] = Wire.read();
    data[3] = Wire.read();
    PM25 = word(data[0], data[1]);
    PM10 = word(data[2], data[3]);
    Serial.print("PM2.5: ");
    Serial.println(PM25);
    Serial.print("PM10: ");
    Serial.println(PM10);
    delay(5000);
}
