
#include "IRremote.h"
int receiver = 11; 
 IRrecv irrecv(receiver);     
decode_results results;   
 void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); 
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
 void loop()  
{
  if (irrecv.decode(&results)) 
   {
    switch(results.value)
    {
      case 0x00FF629D: Serial.println("Tecla: Arriba"); 
                       break;
      case 0x00FF22DD: Serial.println("Tecla: Izquierda");    
                       break;
      case 0x00FF02FD: Serial.println("Tecla: OK");    
                       break;
      case 0x00FFC23D: Serial.println("Tecla: Derecha");   
                       break;
      case 0x00FFA857: Serial.println("Tecla: Abajo"); 
                       break;
      case 0x00FF6897: Serial.println("Tecla: 1");    
                       break;
      case 0x00FF9867: Serial.println("Tecla: 2");    
                       break;
      case 0x0FFB04F: Serial.println("Tecla: 3");    
                       break;
      case 0x00FF30CF: Serial.println("Tecla: 4");
                       digitalWrite(4, !digitalRead(4));
                       Serial.println("4");
                       break;
      case 0x00FF18E7: Serial.println("Tecla: 5");
                       digitalWrite(5, !digitalRead(5));    
                       break;
      case 0x00FF7A85: Serial.println("Tecla: 6");
                       digitalWrite(6, !digitalRead(6));    
                       break;
      case 0x00FF10EF: Serial.println("Tecla: 7");
                       digitalWrite(7, !digitalRead(7));    
                       break; 
      case 0x00FF38C7: Serial.println("Tecla: 8");    
                       break;
      case 0x00FF5AA5: Serial.println("Tecla: 9");    
                       break;
      case 0x00FF42BD: Serial.println("Tecla: *");    
                       break;
      case 0x00FF4AB5: Serial.println("Tecla: 0");    
                       break;
      case 0x00FF52AD: Serial.println("Tecla: #");    
                       break;
    }
    irrecv.resume();
  }  
  delay(300);
}
>>>>>>> 51e2e4052a6df8ccc72d8f0b9e3062e981f04efe
