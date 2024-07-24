#define red 13
#define yel 12
#define ger 11
#define button 10

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(yel,OUTPUT);
  pinMode(ger,OUTPUT);
  pinMode(button,INPUT);
}

void loop()
{
  if(digitalRead(button)!=HIGH)
  {
    digitalWrite(ger,HIGH);
    digitalWrite(red,LOW);
    digitalWrite(yel,LOW);
  }
    if(digitalRead(button)==HIGH)
   {
    digitalWrite(ger,LOW);
    digitalWrite(yel,HIGH);
    delay(1000);
    digitalWrite(yel,LOW);
    digitalWrite(red,HIGH);
    delay(5000);
    
    
  }
}

  
