/******************************************************************
**                                                               **
**                  2.Tipus de Dades i Operadors                 **      
**                                                               **
**                                                               ** 
**  BALTES MARIUS                            DATA: 19 /02/2018   **            
*******************************************************************/
//**************************** INCLUDE ****************************


//*************************** VARIABLES ***************************
int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
//***************************** SETUP *****************************


void setup(){   
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");
  Serial.print("In theory, it cant stores ");
  drive_mb = 1024;
  Serial.print(drive_gb * drive_mb);
  Serial.print(" Megabytes, ");
  drive_kb = 102400;
  Serial.print(drive_mb * drive_mb);
  Serial.println(" kilobytes. ");
  Serial.print("But it relly stores ");
  real_drive_mb = 1000;
  Serial.print(drive_gb * real_drive_mb);
  Serial.print(" Megabytes, ");
  real_drive_kb = 100000;
  Serial.println(real_drive_mb * real_drive_kb);
  Serial.print(" Kilobytes.");
  Serial.print(" You are missing ");
  Serial.print((drive_mb * drive_kb) - (real_drive_mb * real_drive_kb));
  Serial.println(" kilobytes.");
  
 
  }

//******************************* LOOP ****************************

void loop() {  
}

//******************************FUNCIONS***************************
