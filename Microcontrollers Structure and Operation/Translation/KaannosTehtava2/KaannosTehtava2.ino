#include "esimerkkiheader.h"

void setup() {
  Serial.begin(BAUDINOPEUS);
}

void loop() {
  int foo=0,bar=0;
  //Poistin ohjelmassa olevan For loopin, koska voi loop on jo nimensäkin mukaan loop.
    Serial.println("Give first number");
    while(Serial.available() == 0) {
      // let's just wait until user gives number
      foo = Serial.parseInt();
    }
    
    //Bufferin tyhjennys
	  Serial.read();

    Serial.println("And give now second number");
    while(Serial.available() == 0) {
      // let's just wait until user gives number
      bar = Serial.parseInt();
    }

    Serial.print(foo);
    Serial.print(" + ");
    Serial.print(bar);
    Serial.print(" = ");
    Serial.println(summa_aliohjelma(foo,bar));   
    for(;;){} // Ohjelma loppuu tähän, jotta saadaan kerran tulostus.
  // end of while
}   

/*Lisätietoa:
Tehtävässä ei määritelty tarkemmin, että tuleeko ohjelman jatkaa tätä kysymistä uudelleen loopissa.
Kuten aiemmassakin tehtävässä niin päätin jättää ohjelmaa looppaamatta. 
Eli kysyy nyt kerran molempia lukuja.
HOX!!
Huomasin myös, että toisella tavalla kun ohjelmoin tätä niin ohjelma toimi myös kun valitsi 
Serial Monitorissa No Line Ending vaihtoehdon, mutta päätin että mennään tällä vakiolla New Linellä
ja muokkasin tähän sopivaksi.
*/

