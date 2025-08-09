#define VRx 0 // analog
#define VRy 1 // analog
#define SW  2 // digital

void setup() 
{
  Serial.begin(9600);
  pinMode(SW, INPUT_PULLUP);
}

void loop() 
{
  int valX = analogRead(VRx);
  int valY = analogRead(VRy);
  bool valSW = digitalRead(SW);

  Serial.print("VAL:");
  Serial.print(valSW);
  Serial.print(" | X:");
  Serial.print(valX);
  Serial.print(" | Y:");
  Serial.println(valY);
  delay(50);
}
