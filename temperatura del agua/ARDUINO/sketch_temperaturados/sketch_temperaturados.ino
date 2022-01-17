int val;
void setup() {
Serial.begin (9600);
pinMode(A1, INPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT); 
}

void loop() {
val= analogRead (A1);
float mv = (val/1024.0)*5000;
float temp =mv/10;

Serial.print ("TEMPERATURA = ");
Serial.print (temp);
Serial.print ("*C");
Serial.println ();

if (temp<17){
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}
else if (temp>17 && temp<35){
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  
}
else {
  digitalWrite(6,HIGH);
  digitalWrite(7, LOW);
}


  

delay (1000);
}
