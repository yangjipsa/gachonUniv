#define SW 2

void setup() 
{
  Serial.begin(9600);
  pinMode(SW, INPUT);
}

void loop() 
{
  int valSW = digitalRead(SW);
  delay(10); //
  //bool valSW = digitalRead(SW);

  Serial.println(valSW);
  delay(50);
}
