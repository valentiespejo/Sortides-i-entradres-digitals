/**********************************************************************************
**                                                                               **
**                                 DAU LED 1                                     **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    20/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
const int led4 = 5; // define each light in each pin
const int led3 = 6;
const int led2 = 7;
const int led1 = 8;

int pausa = 2000;
//******************************** SETUP ******************************************
void setup()
{
  pinMode(led4, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 8 com una sortida

  digitalWrite(led1, HIGH);   // posar a 5V el pin 8
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
  delay(pausa);
}
//********************************* LOOP ******************************************
void loop()
{
  // número 2
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led1, LOW);
  
  delay(pausa);

  // número 3
  digitalWrite(led2, HIGH);
  digitalWrite(led1, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  

  delay(pausa);

  // número 4
  digitalWrite(led3, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led1, LOW);

  delay(pausa);

  // número 5
  digitalWrite(led3, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led1, HIGH);
  digitalWrite(led4, LOW);


  delay(pausa);

  // número 6
  digitalWrite(led4, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);

  delay(pausa);

  // número 1
  digitalWrite(led1, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  
  delay(pausa);



}
//******************************* FUNCIONS ****************************************
