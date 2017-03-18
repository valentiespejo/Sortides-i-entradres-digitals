/**********************************************************************************
**                                                                               **
**                            CRUÏLLA DE SEMAFORS                                **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    18/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int SAV = 12; // define each light in each pin 
int SAC = 11;
int SAR = 10;
int SBV = 9;
int SBC = 8;
int SBR = 7;
//******************************** SETUP ******************************************
void setup() {                // Run one when the arduino starts
  pinMode(SAV, OUTPUT);
  pinMode(SAC, OUTPUT);
  pinMode(SAR, OUTPUT);
  pinMode(SBV, OUTPUT);
  pinMode(SBC, OUTPUT);
  pinMode(SBR, OUTPUT);
  
}
//********************************* LOOP ******************************************
void loop() {                 
  digitalWrite (SAR, HIGH);
  digitalWrite (SBR, HIGH);

  delay (1000);

  digitalWrite (SBR, LOW);
  digitalWrite (SBV, HIGH);

  delay (4000);

  digitalWrite (SBV, LOW);
  digitalWrite (SBC, HIGH);

  delay (1000);

  digitalWrite (SBC, LOW);
  digitalWrite (SBR, HIGH);

  delay (1000);

  digitalWrite (SAR, LOW);
  digitalWrite (SAV, HIGH);

  delay (4000);

  digitalWrite (SAV, LOW);
  digitalWrite (SAC, HIGH);

  delay (1000);

  digitalWrite (SAC, LOW);
  digitalWrite (SAR, HIGH);

  delay (1000);
}
//******************************* FUNCIONS ****************************************
