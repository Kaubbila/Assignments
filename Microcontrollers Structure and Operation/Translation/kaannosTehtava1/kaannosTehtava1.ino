void printSubroutine(String s);
void setup() {
  Serial.begin(9600);
}

void loop() {
     printSubroutine("This works fine");
     for(;;){}
}

void printSubroutine(String s){
  Serial.println(s);
}
