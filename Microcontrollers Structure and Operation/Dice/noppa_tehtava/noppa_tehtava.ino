int satunnaisluku(void);
bool nappiOnPainettu(void);
void kirjoitaLukuSevenSegmentille(int);

//Nappiin liittyvät tiedot.
const char nappi = 2;
bool painettu = false;

//7Segmenttiin liittyvät tiedot.
const int G = 3;
const int F = 4;
const int E = 5;
const int D = 6;
const int C = 7;
const int B = 8;
const int A = 9;
/*****************************************
 * Seven segmentti numerot esitetään alla olevassa
 * taulukossa (kukin bitti vastaa yhden
 * ledin arvoa). Siten 8-bittisen sanan 7 alinta bittiä
 * sisältävät lediohjaustiedot seuravasti:
 * 0x0ABC DEFG
 * Esimerkiksi numeron 2 toteuttamiseksi on sytytettävä 
 * ledit A,B,C,D,E,F,G eli 8-bittinen sana siis
 * 0x0110 1101 ja kaikki luvut 1- 6 siis esitetään
 * 1 = 0x0011 0000 => ledit B,C palaa
 * 2 = 0x0110 1101 => ledit A,B,D,E,G palaa
 * 3 = 0x0111 1001 => ledit A,B,C,D,G palaa
 * 4 = 0x0011 0011 => ledit B,C,F,G palaa
 * 5 = 0x0101 1011 => ledit A,C,D,F,G palaa
 * 6 = 0x0101 1111 => ledit A,C,D,E,F,G palaa
 */
/* 
 *  Tähän numerot taulukkoon on sitten kerätty numerojen 1-6 ledien arvot 7-bittisinä
 *  lukuina. Saatte itse muodostaa arvot 2-6 tuohon taulukkoon (binääri/heksalukujen 
 *  kertauksena)
 */
const uint8_t numerot[6] = {0x30, 0x6D, 0x79, 0x33, 0x5B, 0x5F};//1-6 Numerot

void setup() {
  Serial.begin(9600); // debuggausta varten
  randomSeed(analogRead(0));     // alustetaan lukugen.
  pinMode(nappi,INPUT_PULLUP);   // 2 pinni kytkimena
                                 // INPUT_PULLUP vetää
                                 // pinnin ylös 5V
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);                           
}

//Pääohjelma
void loop() { 
      if(nappiOnPainettu() == true) { //Jos nappia painaa niin siirrytään 7segmenttifunktioon
      kirjoitaLukuSevenSegmentille(satunnaisluku());//Kirjoitetaan satunnaisluku 7 segmentille.
      }
}
//Satunnaislukufunktio joka palauttaa int arvon.
int satunnaisluku(void) {
   int luku = random(1,7);
   return luku;
} 
//nappifunktio, joka palauttaa true arvon jos nappia painaa ja false arvon muuten.
bool nappiOnPainettu(void) {
  bool napintila = digitalRead(nappi); 
  if(napintila == painettu){ // Napin tila on true kunnes nappia painetaan, jonka jälkeen se on false ja IF-lauseke toteutuu.
    while(digitalRead(nappi) == painettu) { // Estetään lukujen pyöriminen kun on nappi pohjassa.
    }
    delay(50);
    return true;
  } else {
    return false;
  }
}

void kirjoitaLukuSevenSegmentille(int luku) {
   int bitit = numerot[luku-1]; // luku on välillä 1-6, siksi -1
   for(int i = 0; i< 7; i++) {
      int bitti = (bitit>>i)&0x01; // siirretään alimmaksi ja otetaan irti
      digitalWrite(i+3,bitti);
   }
}
