void setup() 
{
  Serial.begin(9600);
  digitalWrite(13, HIGH);
}

void loop(void) 
{   
  int pinRead0 = analogRead(A0);
  float pVolt0 = pinRead0 / 1024.0 * 5.0;
  Serial.print(pVolt0);
  Serial.println();
   
  delay(100);
   
}
