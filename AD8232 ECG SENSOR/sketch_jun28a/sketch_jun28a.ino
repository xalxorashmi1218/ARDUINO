
void setup()
{
 Serial.begin(9600);
 pinMode(14,INPUT);//setup for leads off detection Lo+
 pinMode(12, INPUT);//setup for leads off detection Lo-

}

void loop() {
  if((digitalRead(10) == 1)||(digitalRead(11) == 1)){
    Serial.println('!');
  }
   else{
    //send the value of analog input 0:
    Serial.println(analogRead(A0));
   }
   //wait for a bit to keep serial data froc saturting
   delay(1);
}
