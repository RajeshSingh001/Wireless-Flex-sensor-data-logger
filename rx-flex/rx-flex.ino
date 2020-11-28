#include <LiquidCrystal.h>
#include <Wire.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup()
{
  lcd.begin(20, 4);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() < 0)  return;
  char R = Serial.read();
  if (R != '\r')          return;
  int flexlevel = Serial.parseInt(); 
  lcd.setCursor(0, 1);
  lcd.print(flexlevel);
  if (flexlevel == 1)
  {
    lcd.clear();
    lcd.setCursor(0, 2);
    lcd.print("flex bent       ");
    delay(20);
  }
  else
  {
    lcd.clear();
    lcd.setCursor(0, 2);
    lcd.print("flex not bent");
    delay(20);
  }

}
