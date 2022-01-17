#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,16,2);

byte pot = A0;
int value = 0;

void setup(){
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.print("OXIGENO AGUA");
  lcd.setCursor(0,1);
  lcd.print("Valor: ");
}

void loop (){
  value = analogRead(pot);
  Serial.print("Valor pote: ");
  Serial.println(value);
  lcd.setCursor(7,1);
  lcd.print ("  ");
  lcd.setCursor(7,1);
  lcd.print(value);
  delay(300);
 
}
