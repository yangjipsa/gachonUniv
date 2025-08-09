#define HALL 3

void setup() 
{
  Serial.begin(9600);
  pinMode(HALL, INPUT);
}

void loop() 
{
  bool valHall = digitalRead(HALL);
  Serial.println(valHall);
  delay(50);
}
