#define IRsensor 2
#define led 8

void setup() 
{
    pinMode(IRsensor,INPUT);
    pinMode(led,OUTPUT);
    Serial.begin(9600);

}
int readPin = 0;

void loop()
{
  readPin = digitalRead(IRsensor);
  if (readPin==HIGH)
  {
    digitalWrite(led, HIGH);
    Serial.println("led is on");
    delay(500);
  }
  else
   {
    digitalWrite(led, LOW);
    Serial.println("led is off");
    delay(500);
   }
}
