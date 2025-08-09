#define RELAY 4

void setup() 
{
  pinMode(RELAY, OUTPUT);
}

void loop() 
{
  digitalWrite(RELAY, HIGH);
  delay(1000);
  digitalWrite(RELAY, LOW);
  delay(1000);
}
