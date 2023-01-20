void printFunction(int bar);
void setup() {
  Serial.begin(9600);
}

void loop() {
  int foo = 0;
  Serial.println("Give number between 0-9");
  while(Serial.available() == 0) {
    foo = Serial.parseInt();
  } 
  Serial.read(); // Bufferin tyhjennys varalta.
  printFunction(foo);
  
  for(;;){} //Ohjelman loppu
}

void printFunction(int bar) {
  Serial.print("You gave number = ");
  Serial.println(bar);
}
/*LISÄTIETOA:
Laitoin loopin lopppuun tyhjän for loopin, jotta ohjelman tulostus loppuu ja toimii niinkuin tehtävänannossa
halutaan. 

*/