/**********************************************************************************
**                                                                               **
**                              Comprovació Led                                  **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    15/05/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int col1 = 2;
int col2 = 3;
int col3 = 4;
int col4 = 5;
int col5 = 6;
int col6 = 7;
int col7 = 8;
int col8 = 9;
int col9 = 10;
int niv1 = 11;
int niv2 = 12;
int niv3 = 13;
//******************************** SETUP ******************************************
void setup() {
  // put your setup code here, to run once:
  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  pinMode(col3, OUTPUT);
  pinMode(col4, OUTPUT);
  pinMode(col5, OUTPUT);
  pinMode(col6, OUTPUT);
  pinMode(col7, OUTPUT);
  pinMode(col8, OUTPUT);
  pinMode(col9, OUTPUT);
  pinMode(niv1, OUTPUT);
  pinMode(niv2, OUTPUT);
  pinMode(niv3, OUTPUT);
}
//********************************* LOOP ******************************************
void loop() {
  // put your main code here, to run repeatedly:
// First floor
  digitalWrite(col1, HIGH);
  digitalWrite(niv1, HIGH);
  delay(500);
  digitalWrite(col1, LOW);
  digitalWrite(col2, HIGH);
  delay(500);
  digitalWrite(col2, LOW);
  digitalWrite(col3, HIGH);
  delay(500);
  digitalWrite(col3, LOW);
  digitalWrite(col4, HIGH);
  delay(500);
  digitalWrite(col4, LOW);
  digitalWrite(col5, HIGH);
  delay(500);
  digitalWrite(col5, LOW);
  digitalWrite(col6, HIGH);
  delay(500);
  digitalWrite(col6, LOW);
  digitalWrite(col7, HIGH);
  delay(500);
  digitalWrite(col7, LOW);
  digitalWrite(col8, HIGH);
  delay(500);
  digitalWrite(col8, LOW);
  digitalWrite(col9, HIGH);
  delay(500);
  digitalWrite(col9,LOW);
  digitalWrite(niv1, LOW);
  delay(500);

//Second floor
  digitalWrite(col1, HIGH);
  digitalWrite(niv2, HIGH);
  delay(500);
  digitalWrite(col1, LOW);
  digitalWrite(col2, HIGH);
  delay(500);
  digitalWrite(col2, LOW);
  digitalWrite(col3, HIGH);
  delay(500);
  digitalWrite(col3, LOW);
  digitalWrite(col4, HIGH);
  delay(500);
  digitalWrite(col4, LOW);
  digitalWrite(col5, HIGH);
  delay(500);
  digitalWrite(col5, LOW);
  digitalWrite(col6, HIGH);
  delay(500);
  digitalWrite(col6, LOW);
  digitalWrite(col7, HIGH);
  delay(500);
  digitalWrite(col7, LOW);
  digitalWrite(col8, HIGH);
  delay(500);
  digitalWrite(col8, LOW);
  digitalWrite(col9, HIGH);
  delay(500);
  digitalWrite(col9,LOW);
  digitalWrite(niv2, LOW);
  delay(500);

//Third floor

  digitalWrite(col1, HIGH);
  digitalWrite(niv3, HIGH);
  delay(500);
  digitalWrite(col1, LOW);
  digitalWrite(col2, HIGH);
  delay(500);
  digitalWrite(col2, LOW);
  digitalWrite(col3, HIGH);
  delay(500);
  digitalWrite(col3, LOW);
  digitalWrite(col4, HIGH);
  delay(500);
  digitalWrite(col4, LOW);
  digitalWrite(col5, HIGH);
  delay(500);
  digitalWrite(col5, LOW);
  digitalWrite(col6, HIGH);
  delay(500);
  digitalWrite(col6, LOW);
  digitalWrite(col7, HIGH);
  delay(500);
  digitalWrite(col7, LOW);
  digitalWrite(col8, HIGH);
  delay(500);
  digitalWrite(col8, LOW);
  digitalWrite(col9, HIGH);
  delay(500);
  digitalWrite(col9,LOW);
  digitalWrite(niv3, LOW);
  delay(500);


}
//******************************* FUNCIONS ****************************************
