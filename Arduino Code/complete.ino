#include <Servo.h>

Servo myservo; 
Servo myservo2;
Servo myservo3;


int sensorValue1= 0;
int sensorValue2=0;
int sensorValue3=0;
int prev1= 0;
int prev2=0;
int prev3=0;


int pin1=A1;
int pin2=A2;
int pin3=A3;

void setup()
{
  myservo.attach(9);
  myservo2.attach(7);
  myservo3.attach(5);
  
  myservo.write(0);
  myservo2.write(0);
  myservo3.write(0);
  
  Serial.begin(9600);

  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT);
  pinMode(pin3, INPUT);
  


  
  
}

void loop()
{
  
  // read the value from the sensor
  sensorValue1 = analogRead(pin1);  
  sensorValue2 = analogRead(pin2);
  sensorValue3 = analogRead(pin3);
  
  delay(100);

  Serial.println(sensorValue3);

//for 1




//933
//781
int val2= int((715-sensorValue2)/1.83);

Serial.println(val2);
if(val2 >90){
  myservo2.write(90);
}

if(val2 <0){
  myservo2.write(0);
}
else{
myservo2.write(val2);

}



int val1= int((sensorValue1-69));

if(val1 >90){
  myservo.write(90);
}

if(val1 <0){
  myservo.write(0);
}
else{
myservo.write(val1);


}


int val3= int((933-sensorValue3)/1.7);

if(val3 >90){
  myservo3.write(90);
}

if(val3 <0){
  myservo3.write(0);
}
else{
myservo3.write(val3);


}


}
