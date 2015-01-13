/*
 * Query a SHT10 temperature and humidity sensor
 *
 * A simple example that queries the sensor every 5 seconds
 * and communicates the result over a serial connection.
 * Error handling is omitted in this example.
 */

#include <Sensirion.h>
const uint8_t clockPin =  2;
const uint8_t dataPin3  =  3;
const uint8_t dataPin4  =  4;
const uint8_t dataPin5  =  5;
const uint8_t dataPin6  =  6;
const uint8_t dataPin7  =  7;
const uint8_t dataPin8  =  8;
const uint8_t dataPin9  =  9;
const uint8_t dataPin10  =  10;
const uint8_t dataPin11  =  11;
const uint8_t dataPin12  =  12;
const uint8_t dataPin13  =  13;

float temperature;
float humidity;
float dewpoint;

Sensirion tempSensor3 = Sensirion(dataPin3, clockPin);
Sensirion tempSensor4 = Sensirion(dataPin4, clockPin);
Sensirion tempSensor5 = Sensirion(dataPin5, clockPin);
Sensirion tempSensor6 = Sensirion(dataPin6, clockPin);
Sensirion tempSensor7 = Sensirion(dataPin7, clockPin);
Sensirion tempSensor8 = Sensirion(dataPin8, clockPin);
Sensirion tempSensor9 = Sensirion(dataPin9, clockPin);
Sensirion tempSensor10 = Sensirion(dataPin10, clockPin);
Sensirion tempSensor11 = Sensirion(dataPin11, clockPin);
Sensirion tempSensor12 = Sensirion(dataPin12, clockPin);
Sensirion tempSensor13 = Sensirion(dataPin13, clockPin);

void setup()
{
  Serial.begin(9600);
  while (!Serial);
}

void loop()
{
 
 // if (Serial.available())
 // {
    int ch = Serial.read();
   // if (ch >=3 && ch <= 13)
  //  {
      switch (ch) 
      {
      case '0':
        tempSensor3.measure(&temperature, &humidity, &dewpoint);
          Serial.print(temperature);
          Serial.print(" ");
          Serial.print(humidity);
          Serial.print(" ");
          Serial.print(dewpoint);
          Serial.println(" ");
        break;
      case '1':
        tempSensor4.measure(&temperature, &humidity, &dewpoint);
          Serial.print(temperature);
          Serial.print(" ");
          Serial.print(humidity);
          Serial.print(" ");
          Serial.print(dewpoint);
          Serial.println(" ");
        break;
       case '2':
        tempSensor5.measure(&temperature, &humidity, &dewpoint);
          Serial.print(temperature);
          Serial.print(" ");
          Serial.print(humidity);
          Serial.print(" ");
          Serial.print(dewpoint);
          Serial.println(" ");
        break;
       case '3':
        tempSensor6.measure(&temperature, &humidity, &dewpoint);
          Serial.print(temperature);
          Serial.print(" ");
          Serial.print(humidity);
          Serial.print(" ");
          Serial.print(dewpoint);
          Serial.println(" ");
        break;
       case '4':
        tempSensor7.measure(&temperature, &humidity, &dewpoint);
          Serial.print(temperature);
          Serial.print(" ");
          Serial.print(humidity);
          Serial.print(" ");
          Serial.print(dewpoint);
          Serial.println(" ");
        break;
       case '5':
        tempSensor8.measure(&temperature, &humidity, &dewpoint);
          Serial.print(temperature);
          Serial.print(" ");
          Serial.print(humidity);
          Serial.print(" ");
          Serial.print(dewpoint);
          Serial.println(" ");
        break;
       case '6':
        tempSensor9.measure(&temperature, &humidity, &dewpoint);
          Serial.print(temperature);
          Serial.print(" ");
          Serial.print(humidity);
          Serial.print(" ");
          Serial.print(dewpoint);
          Serial.println(" ");
        break;
       case '7':
        tempSensor10.measure(&temperature, &humidity, &dewpoint);
          Serial.print(temperature);
          Serial.print(" ");
          Serial.print(humidity);
          Serial.print(" ");
          Serial.print(dewpoint);
          Serial.println(" ");
        break;
       case '8':
        tempSensor11.measure(&temperature, &humidity, &dewpoint);
          Serial.print(temperature);
          Serial.print("11");
          Serial.print(humidity);
          Serial.print(" ");
          Serial.print(dewpoint);
          Serial.println(" ");
        break;
       case '9':
        tempSensor12.measure(&temperature, &humidity, &dewpoint);
          Serial.print(temperature);
          Serial.print("12");
          Serial.print(humidity);
          Serial.print(" ");
          Serial.print(dewpoint);
          Serial.println(" ");
        break;

     // }
 //   }  
  }    
 delay(1);  
}
