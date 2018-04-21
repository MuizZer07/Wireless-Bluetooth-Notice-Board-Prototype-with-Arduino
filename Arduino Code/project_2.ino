#include <LiquidCrystal.h>
LiquidCrystal LCD(12, 11, 5, 4, 3, 2);
String s = "";
String a = "";
void setup()

{

LCD.begin(16, 2);

Serial.begin(9600);

}

void loop()
 {

  if (Serial.available()) { 
    while (Serial.available() > 0) { 
      LCD.clear();
      String data = (Serial.readString());
      if(data.length() == 1 && data[0] == 'x'){
        Serial.flush();
        LCD.clear();
        s="";
        a="";
        data="";
        break;
      }
      
         
      LCD.print(data);
      delay(1500);
      LCD.clear();
      s = s + "~" + data;

      while(!Serial.available()){
        
        for(int p=0; p < s.length() ;p++){
          if(s[p]!='~'){
            a += s[p];
          } 
          else{
              LCD.clear();
              LCD.print(a);
              delay(1500);
              a="";
          }
         } 
        LCD.clear();
        LCD.print(a);
        delay(1500);
        a="";
       } 
  }
 }
}

   
