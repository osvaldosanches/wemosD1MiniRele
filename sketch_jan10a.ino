//Osvaldo Sanches
//10-jan-2021

#define RelayPin D2 //Pino do relê

void setup() {
  pinMode( RelayPin, OUTPUT);
}

void loop() {
  
  digitalWrite( RelayPin, HIGH);
  delay(5000);
  
  digitalWrite(RelayPin, LOW);
  delay(5000);
}
