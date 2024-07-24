#define red 13
#define yel 12
#define ger 11 
  
void setup() 
{
 pinMode(red,OUTPUT);
 pinMode(yel,OUTPUT);
 pinMode(ger,OUTPUT);
}

void loop() 
{
  digitalWrite(red,HIGH);
  digitalWrite(yel,LOW);
  digitalWrite(ger,LOW);
  delay(5000);

  digitalWrite(red,LOW);
  digitalWrite(yel,HIGH);
  digitalWrite(ger,LOW);
  delay(2000);

  digitalWrite(red,LOW);
  digitalWrite(yel,LOW);
  digitalWrite(ger,HIGH);
  delay(5000);

  digitalWrite(red,LOW);
  digitalWrite(yel,HIGH);
  digitalWrite(ger,LOW);
  delay(2000);
} 
