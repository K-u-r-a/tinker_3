#include <Servo.h>

#include <Adafruit_LiquidCrystal.h>


int pos = 0;

Servo servo_9;//the signal pin of the servo


long duration;

Adafruit_LiquidCrystal lcd(0);//by default the address is selected

void setup(){
  
  servo_9.attach(9);
  

 
  
  lcd.begin(16,2); //colmn & rows.
  
    //lcd.setBacklight(1); // The led's have been set high.
  
  lcd.print("servo position");
  
   delay(15);
  
  lcd.clear();//clear the lcd screen

}

void loop(){
  
  //sweep the servo from 0 to 180 degrees in steps of 5 degrees
  
  for (pos=0; pos<=180; pos+=5){
    
    //the servo to go to position a pos
    
    servo_9.write(pos);
    
   
   lcd.setCursor(0,0); // Where the texts starts to be printed on
  
  lcd.print("Pos: "); // prints string distance on the LCD
  
  lcd.print(pos);
  
  lcd.print("  degrees");
  
  delay(15);
    
  }
  
  delay(1000); 
  
  
  
  
  for (pos = 180; pos>=0; pos-=5) {
    
    servo_9.write(pos);
    
    delay(15);
    
    //waitfor15illiseconds(s)
   lcd.setCursor(0,0); // Where the texts starts to be printed on
  
  lcd.print("Pos: "); // prints string distance on the LCD
  
    lcd.print(pos);
  
  lcd.print("  degrees");
  
  delay(15);
    
   }
  
  delay(1000);
  
   
  
}
       
    

