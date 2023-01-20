void giveNumbers();
void printNumbers();
void alustaTimer();
bool tila = false;

int hours = 0, minutes = 0, seconds = 0;

void setup() {

  Serial.begin(9600);
  Serial.println("How much is the clock?");
  giveNumbers();
  Serial.println("");
  Serial.println("1. Pause");
  Serial.println("2. Continue");
  Serial.println("3. New time");
  tila = true;
  printNumbers();
  delay(1000);
  alustaTimer();
}

void loop() {

    if(tila == true) {
      printNumbers();
    }

    int arvo = Serial.parseInt();

    if(arvo == 1) {
      tila = false;
      Serial.println("Paused!");
    } else if (arvo == 2) {
      tila = true;
      Serial.println("Continue!");
    } else if (arvo == 3) {
      Serial.println("New time:");
      tila = false;
      giveNumbers();
    }
    
}

ISR(TIMER1_COMPA_vect){ 
  
  if(tila == true) {
    seconds++;
    if (seconds == 60) {
    seconds = 0;
    minutes++;
    if (minutes == 60) {
    minutes = 0;
    hours++;
  }
    if (hours == 24) {
    hours = 0;
    minutes = 0;
    seconds = 0;
  }
  }
  }
  
}

void giveNumbers() {

  Serial.read();//Bufferin tyhjennys
  
  Serial.println("Hours:");
  while(Serial.available() == 0) {
      hours = Serial.parseInt(); 
    }

    Serial.read();//Bufferin tyhjennys

Serial.println("Minutes: ");
  while(Serial.available() == 0) {
      minutes = Serial.parseInt();
  }

    Serial.read();//Bufferin tyhjennys

Serial.println("Seconds:");
    while(Serial.available() == 0) {
      seconds = Serial.parseInt();
    }
    Serial.read();//Bufferin tyhjennys
    //tila = true;
}

void printNumbers() {

if(hours < 10) {
  Serial.print("0");
}

Serial.print(hours);
Serial.print(":");
if(minutes < 10) {
  Serial.print("0");

}
Serial.print(minutes);
Serial.print(":");
if(seconds < 10) {
  Serial.print("0");
}
Serial.println(seconds);
}

void alustaTimer(void) {
  noInterrupts(); // Disabloidaan keskeytykset alustuksen ajaksi

  TCCR1A = 0; //Alustetaan nämä kaksi keskeistä kontrollirekisteriä
  TCCR1B = 0; // ensin nollaksi

  TCCR1B |= (1 << WGM12); // Tämä bitti päälle ja timer on CTC moodissa
  //Jaetaan timerin kello 1024:llä
  TCCR1B |= (1 << CS10); 
  TCCR1B |= (0 << CS11); 
  TCCR1B |= (1 << CS12); //asetetaan kellon jako 1024;
  
  OCR1A = 15625; // 16Mhz / 1024       
  TIMSK1 |= (1 << OCIE1A); //Timer HW:sta enabloidaan Output Compare Interrupt Enable

  interrupts(); //Sallitaan keskeytykset alustuksen päätyttyä
}

/******TOTEUTUS 7 SEGMENTTIJÄRJESTELMÄÄN******

Kotitehtävä 2 tyylillä char arrayllä numeroiden alustus alkioihin 1-9 hexalukuina.
6 Näyttöä eli tt:mm:ss. 
If ehdoilla lukujen syötöt per näyttö. Eli 1-9 oikeaan näyttöön, jonka jälkeen if lause niin saadaan
vasempaan näyttöön esim 1 eli näyttäisi lukua 10 jne.
ja toteutus printNumbers() funktiolla syötöt näyttöihin.

*/



