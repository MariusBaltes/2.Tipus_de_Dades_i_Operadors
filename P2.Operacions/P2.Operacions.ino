/******************************************************************
**                                                               **
**                    2.Tipus de Dades i Operadors               **      
**                                                               **
**                                                               ** 
**  BALTES MARIUS                             DATA:  17/02/2018  **            
*******************************************************************/
//**************************** INCLUDE ****************************


//*************************** VARIABLES ***************************
int a = 5;
int b = 10; 
int c = 20;
//***************************** SETUP *****************************


void setup(){ Serial.begin(9600);
  
  Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // add
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiply
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divide
  Serial.println(c / b);

  Serial.print("c % b = ");       // module
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // subtract
  Serial.println(b - c);

  
}

//******************************* LOOP ****************************

void loop() {  

}

//******************************FUNCIONS***************************
