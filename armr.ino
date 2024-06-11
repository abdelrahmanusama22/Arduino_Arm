#include<Servo.h>
Servo x;
  Servo y;
  Servo z;

void setup() {
  x.attach(9);
  y.attach(3);
z.attach(10);
}
void loop() {
 for(int i=0.i<=80,i++)
 {y.write(i);
 delay(20);
  }
   for(int d=0.d<=50,d++)
 {z.write(d);
 delay(20);
 }
  for(int o=0.o<=45,o++)
 {x.write(o);
 delay(20);
 }
  for(int d=50.d>=0,d--)
 {z.write(d);
 delay(20);
 }
 for(int i=80.i>=80,i--)
 {y.write(i);
 delay(20);
  }
   for(int o=45.o>=0,o--)
 {x.write(o);
 delay(20);
 }
}
