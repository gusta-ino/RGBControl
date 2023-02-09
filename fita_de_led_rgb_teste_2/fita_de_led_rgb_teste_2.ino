#define red 4
#define green 0
#define blue 2

void setup() {
  pinMode(red,OUTPUT);
   pinMode(green,OUTPUT); 
 // pinMode(blue,OUTPUT);
 digitalWrite(red,LOW);
 digitalWrite(green,LOW);
 digitalWrite(blue,LOW);
}

void loop() {
  static int PWM = 0;//PWM variavel que seta qual o nivel de luminosidade do led
  static bool lim1 = 0;// inverte o estado do led

   static int PWM2 = 0;//PWM variavel que seta qual o nivel de luminosidade do led
  static bool lim2 = 0;// inverte o estado do led

   static int PWM3 = 0;//PWM variavel que seta qual o nivel de luminosidade do led
  static bool lim3 = 0;// inverte o estado do led
  
  if(lim1 == 0)
  {
    PWM++;
    if(PWM >= 1000)
      {
        lim1 = 1;
      }
  }
  else{
    PWM--;
    if(PWM ==0)
    {
      lim1 = 0;
      }
    }
    
      if(lim2 == 0)
  {
    PWM2++;
    if(PWM2 >= 500)
      {
        lim2 = 1;
      }
  }
  else{
    PWM2--;
    if(PWM2 ==0)
    {
      lim2 = 0;
      }
    }


      if(lim3 == 0)
  {
    PWM3++;
    if(PWM3 >= 1000)
      {
        lim3 = 1;
      }
  }
  else{
    PWM3--;
    if(PWM3 ==0)
    {
      lim3 = 0;
      }
    }
    analogWrite(red, PWM);
    analogWrite(green, PWM2);
    analogWrite(blue, PWM3);
    delay (1);
}
