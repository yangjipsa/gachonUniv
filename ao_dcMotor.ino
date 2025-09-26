// MotorDriver : DRV8838DSGR (designed by yangjipsa)
// for Arduino Code (2025.09.26)

#define FORWARD  0
#define BACKWARD 1

int pinPH = 8;  // R
int pinEN = 9;  // F

// PH : direction 0/1
// EN : PWM 
void setup() {
  pinMode(pinPH, OUTPUT);
}

void loop() {
  goForward(pinPH, pinEN, 100);
  delay(1000);
  Stop(pinEN);
  delay(1000);
  goBackward(pinPH, pinEN, 200);
  delay(1000);
  Stop(pinEN);
  delay(1000);
}

void goForward(int PH, int EN, int PWM)
{
  digitalWrite(PH, FORWARD);
  if(PWM>255) PWM = 255;
  else if (PWM<0) PWM = 0;
  else PWM = PWM;
  analogWrite(EN, PWM);
}

void goBackward(int PH, int EN, int PWM)
{
  digitalWrite(PH, BACKWARD);
  if(PWM>255) PWM = 255;
  else if (PWM<0) PWM = 0;
  else PWM = PWM;
  analogWrite(EN, PWM);
}

void Stop(int EN)
{
  analogWrite(EN, 0);
}
