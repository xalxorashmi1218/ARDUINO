#define led 13
#define button 12
void setup()
{
  Serial.print(9600);
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
}

void loop() 
{
  if (digitalRead(button)==HIGH)
  {
    Serial.print("button ON");
    digitalWrite(led,HIGH);
    delay(1000);
  }
  else
  {
    Serial.print("button OFF");
    digitalWrite(led,LOW);  
    }
}
