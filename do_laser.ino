#define LASER 2

void setup() 
{
  pinMode(LASER, OUTPUT);
}

void loop() 
{
  digitalWrite(LASER, HIGH);
  delay(1000); // ms
  digitalWrite(LASER, LOW);
  delay(1000); 
}
