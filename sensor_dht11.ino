// sensor : DHT11
// library : DHT11 by Dhruba Saha (ver 2.1.0)
// pin assign : S-D4, V-5V, G-GND

#include <DHT11.h>

#define DHTPIN 4

DHT11 dht11(DHTPIN);

void setup() 
{
  Serial.begin(9600); // 시리얼 통신 속도를 9600
}

void loop() 
{
  delay(2000);

  int temperature = 0;
  int humidity = 0;

  int result = dht11.readTemperatureHumidity(temperature, humidity);

  if (!result) 
  {
      Serial.print("Temperature: ");
      Serial.print(temperature);
      Serial.print(" °C\tHumidity: ");
      Serial.print(humidity);
      Serial.println(" %");
  } 
  else 
  {
      Serial.println(DHT11::getErrorString(result));
  }
}
