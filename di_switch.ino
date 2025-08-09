#define SW 2

void setup() 
{
  Serial.begin(9600);
  pinMode(SW, INPUT); // digital Input/Output
}

void loop() 
{
  int valSW = digitalRead(SW);
  //bool valSW = digitalRead(SW);

  Serial.println(valSW);
  delay(50); // 50ms
}
