#include <Servo.h> 
Servo servo1;//buat objek motor servo 1               
Servo servo2; // buat objek motor servo 2

int sudut= 0; //variabel untuk menyimpan sudut posisi servo 
 
void setup() 
{ 
servo1.attach(9);//memasang obyek motor servo 1   
servo2.attach(7);//memasang obyek motor servo 2 
} 
 
void loop() 
{ 
 
  for(sudut = 0; sudut < 180; sudut += 1) {
    servo1.write(sudut);//derajat posisi motor servo 1 
    servo2.write(sudut);//dan servo2 sesuai nilai 
    delay(15);  // tunda  15ms setiap posisi mencapai satu 
              // langkah (1 derajat)
} 

  for(sudut = 180; sudut>=1; sudut-=1){                                
    servo1.write(sudut); 
    servo2.write(sudut);
    delay(15);
  } 
}
