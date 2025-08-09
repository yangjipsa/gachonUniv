#define LIGHT 0

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int valLight = analogRead(LIGHT);

  Serial.println(valLight);
  delay(50);
}
