#define DEBUG 0
   
enum State
{
    INITIAL_STATE,
    WAITING_NUMBER1,
    WAITING_NUMBER2,
};

/* events by the used. I.e. numbers and operands  */
enum Event
{
    NUMBER_GIVEN,
    COMMA_GIVEN, //Lisätty pilkkutila
    OPERAND_GIVEN,
    NOT_A_NUMBER_GIVEN,
};

State state = INITIAL_STATE;
char pilkullinen[20], pilkullinen2[20];
char code,operand,calc,comma;
Event event;
float number; // Muutettin int number > float number. Voidaan antaa vastaus desimaalilukuna kun syötettynä kokonaislukuja.
float value1,value2;   
float moneskoPilkunJalkeen=0, moneskoPilkunJalkeen2=0;

void calculateAndPrintResult()
{
            float result = 0;
            if(calc == '+')
            {
              result = value1 + value2;
            }
            if(calc == '-')
            {
              result = value1 - value2;
            }
            if(calc == '*')
            {
              result = value1 * value2;
            }
            if(calc == '/')
            {
              result = value1 / value2;
            }
            Serial.print("Result is = ");
            Serial.println(result);

            Serial.print("Value 1 =");
            Serial.println(value1);
            Serial.print("Value 2 = ");
            Serial.println(value2);
             
}

void setup() {
  Serial.begin(9600);
}

void loop() {

   while(1)
   {
     
      if(Serial.available())
      {
         String line = Serial.readStringUntil('\r');

         for(int cloop = 0;cloop < line.length();cloop++)
         {
           code = line[cloop];

           if(code>47 && code<58)
           {
              event = NUMBER_GIVEN;
              number = code - 48;

           } else if (code == 44) { // Jos pilkku havaitaan, lisätään pilkkutila. Pilkun ASCII arvo on 44
              event = COMMA_GIVEN;
           }

           else if(code == 43 || code==45 || code==47 || code==42||code==61) {
              event = OPERAND_GIVEN;
              operand = code;

           } else {
             event = NOT_A_NUMBER_GIVEN;
           }

           /**************************************************************
             And here start the actual implementation of activity diagram* 
            **************************************************************/

           if(state == INITIAL_STATE) {
             
               value1 = 0.00;
               value2 = 0.00;
               #if DEBUG
               Serial.println("if(state == INITIAL_STATE)");
               #endif
               if(event == NUMBER_GIVEN) {
                   state = WAITING_NUMBER1;

               } else if (event = COMMA_GIVEN) {
                  state = WAITING_NUMBER1;

               } else {
                   Serial.println("Virhe, anna oikea laskutoimitus");
                   state = INITIAL_STATE;
               }
           }
           
           if(state == WAITING_NUMBER1)
           {               
               #if DEBUG
               Serial.println("if(state == WAITING_NUMBER1)");
               #endif

               if(event == NUMBER_GIVEN && moneskoPilkunJalkeen == 0) { //Merkit ennen pilkkua tai kokonaisluvut suoritetaan tässä ehdossa
                   value1 = value1*10 + number;
                
               } else if (moneskoPilkunJalkeen >= 1 && event == NUMBER_GIVEN) { //Jos pilkku syötetty, niin pilkun jälkeiset merkit suoritetaan tässä ehdossa
                 float pilkunJalkeinenArvo = number * pow(0.1, moneskoPilkunJalkeen);
                 value1 = value1 + pilkunJalkeinenArvo;
                 moneskoPilkunJalkeen = moneskoPilkunJalkeen + 1;

               } else if (event == COMMA_GIVEN) { //Jos pilkkuarvo syötetty niin ennen pilkkua olevat merkit suoritetaan if lauseessa. Pilkun jälkeiset arvot if elsessä.
                  moneskoPilkunJalkeen = 1;
                  } else {
                    #if DEBUG
                    Serial.println("Onko operand?");
                    #endif

                   if(event == OPERAND_GIVEN)
                   {
                      state = WAITING_NUMBER2;
                      calc = operand;
                   } else {
                      Serial.println("Virhe, anna oikea laskutoimitus");
                      state = INITIAL_STATE;
                   }
               }

           } else {
               #if DEBUG
               Serial.println("else(state == WAITING_NUMBER2)");
               #endif

               if(event == NUMBER_GIVEN && moneskoPilkunJalkeen2 == 0) { //Merkit ennen pilkkua tai kokonaisluvut suoritetaan tässä ehdossa
                    value2 = value2*10 + number;
                    
                    
               } else if (moneskoPilkunJalkeen2 >= 1 && event == NUMBER_GIVEN) { //Jos pilkku syötetty, niin pilkun jälkeiset merkit suoritetaan tässä ehdossa
                 float pilkunJalkeinenArvo2 = number * pow(0.1, moneskoPilkunJalkeen2);
                 value2 = value2 + pilkunJalkeinenArvo2;
                 moneskoPilkunJalkeen2 = moneskoPilkunJalkeen2 + 1;

    

               } else if (event == COMMA_GIVEN) { //Jos pilkkuarvo syötetty niin ennen pilkkua olevat merkit suoritetaan if lauseessa. Pilkun jälkeiset arvot if elsessä.
                  moneskoPilkunJalkeen2 = 1;
                  } else {
                   if(value2 == 0) {
                       Serial.println("Virhe, anna oikea laskutoimitus");
                       state = INITIAL_STATE;
                   } else if(event == COMMA_GIVEN) {
                       calculateAndPrintResult();
                       state = INITIAL_STATE;
                   } else {
                       calculateAndPrintResult();
                       state = INITIAL_STATE;
                    }
               }
       
           }
            /********************************************************************
             * And here the activity diagram stuff ends and we go for next event
             * *****************************************************************/
        }   // end for
        moneskoPilkunJalkeen=0;
        moneskoPilkunJalkeen2=0;
        value1=0;
        value2=0;
        number=0;
      } 
             // end if
   }        // end while

}


