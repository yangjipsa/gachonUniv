#define TILT 4

void setup() 
{
  Serial.begin(115200);
  pinMode(TILT, INPUT);
}

void loop() 
{
  bool valTilt = digitalRead(TILT);

  Serial.println(valTilt);
  delay(50);
}
