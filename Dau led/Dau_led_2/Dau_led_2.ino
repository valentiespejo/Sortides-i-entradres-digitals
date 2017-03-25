/**********************************************************************************
**                                                                               **
**                                 DAU LED 2                                     **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    25/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
const int led4 = 5; // define each light in each pin
const int led3 = 6;
const int led2 = 7;
const int led1 = 8;
const int polsador = 2;
int num = 1;

int pausa = 5000;
//******************************** SETUP ******************************************
void setup()
{
  pinMode(led4, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(polsador, INPUT);

  digitalWrite(led1, HIGH);   // posar a 5V el pin 8
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
  delay(pausa);
}
//********************************* LOOP ******************************************
void loop()
{

  if (digitalRead(polsador) == LOW)
  {
    num = random(1, 7);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led1, LOW);
  }
  switch (num)
  {
    case 1:
      digitalWrite(led1, HIGH);    // mostrar el 1
      break;
    case 2:
      digitalWrite(led2, HIGH);   // mostrar el 2
      break;
    case 3:
      digitalWrite(led1, HIGH);    // mostrar el 3
      digitalWrite(led3, HIGH);
      break;
    case 4:
      digitalWrite(led2, HIGH);   // mostrar el 4
      digitalWrite(led3, HIGH);
      break;
    case 5:
      digitalWrite(led2, HIGH);   // mostrar el 5
      digitalWrite(led3, HIGH);
      digitalWrite(led1, HIGH);
      break;
    case 6:
      digitalWrite(led2, HIGH);   // mostrar el 6
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      break;
  }
}
//******************************* FUNCIONS ****************************************
