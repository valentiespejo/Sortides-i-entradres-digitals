/**********************************************************************************
**                                                                               **
**                              DISPLAY 7 SEG 3                                  **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    20/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
const int A = 5; // define each light in each pin 
const int B = 6;
const int C = 7;
const int D = 8;
const int E = 9;
const int F = 10;
const int G = 11;
int pausa = 500;
//******************************** SETUP ******************************************
void setup()
{
  pinMode(A, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(B, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(C, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(D, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(E, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(F, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(G, OUTPUT);     // definir el pin 11 com una sortida
          
}
//********************************* LOOP ******************************************
void loop()
{
  // número V 
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH); 
  digitalWrite(A, LOW);            
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH);     
  digitalWrite(F, LOW);       
  digitalWrite(G, LOW); 
  
  delay(pausa);   
            
  // número A 
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);            
  digitalWrite(C, HIGH);     
  digitalWrite(D, LOW);     
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);     
  digitalWrite(G, HIGH);      
    
  delay(pausa);              

  // número L  
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);            
  digitalWrite(C, LOW);  
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);     
  digitalWrite(G, LOW);      
    
  delay(pausa);              

  // número E 
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);            
  digitalWrite(C, LOW);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);     
  digitalWrite(G, HIGH);       
      
  delay(pausa); 
                
  // número N 
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);            
  digitalWrite(C, HIGH);     
  digitalWrite(D, LOW);     
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);     
  digitalWrite(G, HIGH);    
        
  delay(pausa);  
              
   // número T     
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);            
  digitalWrite(C, LOW);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);     
  digitalWrite(G, HIGH);      
          
  delay(pausa);               
  
  // número I
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);            
  digitalWrite(C, LOW);     
  digitalWrite(D, LOW);     
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);     
  digitalWrite(G, LOW);       
            
  delay(pausa);              
           
}
//******************************* FUNCIONS ****************************************
