const int flexPin = A0;
const int ledPin =  7;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(flexPin, INPUT);
}

void loop() 
{
  int flexlevel = digitalRead(flexPin);
  if(flexlevel== HIGH)
  {
  Serial.print('\r');
  Serial.print(flexlevel);
  Serial.print('|');
  Serial.print(flexlevel);
  Serial.print('\n');
  digitalWrite(ledPin, HIGH);
  delay(20);
  }
  else
  {
  Serial.print('\r');
  Serial.print(flexlevel);
  Serial.print('|');
  Serial.print(flexlevel);
  Serial.print('\n');
  digitalWrite(ledPin, LOW);
  delay(20);
  }
}
