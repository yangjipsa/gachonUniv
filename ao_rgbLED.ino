#define ledR 3
#define ledG 5
#define ledB 6

void rgbColor(int r, int g, int b)
{
  analogWrite(ledR, r); //dutycycle 0 ~ 255
  analogWrite(ledG, g);
  analogWrite(ledB, b);
}

void setup() { }

void loop() 
{
  for(int i=0 ; i<256 ; i++)
  {
    rgbColor(i,0,0);
    delay(10); // 10ms * 256 = 2.56 sec
  }

  for(int i=0 ; i<256 ; i++)
  {
    rgbColor(255,i,0);
    delay(10); // 10ms * 256 = 2.56 sec
  }

  for(int i=0 ; i<256 ; i++)
  {
    rgbColor(255,255,i);
    delay(10); // 10ms * 256 = 2.56 sec
  }
}
