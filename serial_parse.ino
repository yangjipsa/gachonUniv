void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()) 
  {
    long value1 = Serial.parseInt();
    long value2 = Serial.parseInt();
//    float value1 = Serial.parseFloat();
//    float value2 = Serial.parseFloat();

    Serial.print("A : ");
    Serial.println(value1);
    Serial.print("B : ");
    Serial.println(value2);
    Serial.print("A + B = ");
    Serial.println(value1 + value2);
  }
}
