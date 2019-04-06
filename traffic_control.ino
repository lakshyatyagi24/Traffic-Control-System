#include <Servo.h>

Servo ServoMotor0;
Servo ServoMotor1;
Servo ServoMotor2;
Servo ServoMotor3;

int flag = 0, distance0, distance1, distance2, distance3, time0, time1, time2, time3, duration0, duration1, duration2, duration3;    

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);//echo
  pinMode(3, OUTPUT);  //trig
  ServoMotor0.attach(4);
  //pinMode(5, OUTPUT);
  pinMode(6, INPUT);//echo
  pinMode(7, OUTPUT);  //trig
  ServoMotor1.attach(8);
  //pinMode(9, OUTPUT);
  pinMode(10, INPUT);//echo
  pinMode(11, OUTPUT);  //trig
  ServoMotor2.attach(12);
  //pinMode(13, OUTPUT);
  pinMode(5, INPUT);//echo
  pinMode(9, OUTPUT);  //trig
  ServoMotor3.attach(13);
  //pinMode(5, OUTPUT);
  
  
  // put your setup code here, to run once:

}

void loop() {
  //int distance0;//=digitalRead(2)/(2*29.1);
  //int distance1;//=digitalRead(6)/(2*29.1);
  //int distance2;//=digitalRead(10)/(2*29.1);
  //int distance3;//=digitalRead(5)/(2*29.1);
  
  if(flag>=0 && flag<=3)
  {
    digitalWrite(3, LOW);
    delayMicroseconds(2);
    digitalWrite(3, HIGH);
    delayMicroseconds(10);
    digitalWrite(2, LOW);
    duration0=pulseIn(2, HIGH);
    distance0=(duration0/2)/29.1;
    Serial.println(distance0);
    delay(500);
    if(flag==0)
    {
      ServoMotor0.write(0);
      ServoMotor1.write(90);
      ServoMotor2.write(90);
      ServoMotor3.write(90);
      flag=flag+1;
      Serial.println("Motor 0");
      Serial.println("Time Duration: ");
      if(distance0>(19-0) && distance0<=(19-5))
      {
        for(int i=0; i<15; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(3, LOW);
          digitalWrite(3, HIGH);
          digitalWrite(3, LOW);
        }
      }
      else if(distance0>(19-5) && distance0<=(19-10))
      {
        for(int i=0; i<20; i++)
        {
.          Serial.println(i+1);
          delay(1000);
          digitalWrite(3, LOW);
          digitalWrite(3, HIGH);
          digitalWrite(3, LOW);
        }
      }
      else if(distance0>(19-10) && distance0<=(19-15)
      )
      {
        for(int i=0; i<25; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(3, LOW);
          digitalWrite(3, HIGH);
          digitalWrite(3, LOW);
        }
      }
      else
      {
        for(int i=0; i<5; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(3, LOW);
          digitalWrite(3, HIGH);
          digitalWrite(3, LOW);
        }
      }

    }
    else if(flag==1)
    {
      ServoMotor0.write(90);
      ServoMotor1.write(0);
      ServoMotor2.write(90);
      ServoMotor3.write(90);
      digitalWrite(8, LOW);
      delayMicroseconds(2);
      digitalWrite(8, HIGH);
      delayMicroseconds(10);
      digitalWrite(6, LOW);
      duration1=pulseIn(6, HIGH);
      distance1=(duration1/2)/29.1;
      Serial.println(distance1);
      delay(500);
      flag=flag+1;
      Serial.println("Motor 1");
      if(distance1>(19-0) && distance1<=(19-5))
      {
        for(int i=0; i<15; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(7, LOW);
          digitalWrite(7, HIGH);
          digitalWrite(7, LOW);
        }
      }
      else if(distance1>(19-5) && distance1<=(19-10))
      {
        for(int i=0; i<20; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(7, LOW);
          digitalWrite(7, HIGH);
          digitalWrite(7, LOW);
        }
      }
      else if(distance1>(19-10) && distance1<=(19-15))
      {
        for(int i=0; i<25; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(7, LOW);
          digitalWrite(7, HIGH);
          digitalWrite(7, LOW);
        }
      }
      else
      {
        for(int i=0; i<5; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(7, LOW);
          digitalWrite(7, HIGH);
          digitalWrite(7, LOW);
        }
      }
    }
    else if(flag==2)
    {
      ServoMotor0.write(90);
      ServoMotor1.write(90);
      ServoMotor2.write(0);
      ServoMotor3.write(90);
      digitalWrite(11, LOW);
      delayMicroseconds(2);
      digitalWrite(11, HIGH);
      delayMicroseconds(10);
      digitalWrite(10, LOW);
      duration2=pulseIn(10, HIGH);
      distance2=(duration2/2)/29.1;
      Serial.println(distance2);
      delay(500);
      flag=flag+1;
      Serial.println("Motor 2");
      if(distance2>(19-0) && distance2<=(19-5))
      {
        for(int i=0; i<15; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(11, LOW);
          digitalWrite(11, HIGH);
          digitalWrite(11, LOW);
        }
      }
      else if(distance2>(19-5) && distance2<=(19-10))
      {
        for(int i=0; i<20; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(11, LOW);
          digitalWrite(11, HIGH);
          digitalWrite(11, LOW);
        }
      }
      else if(distance2>(19-10) && distance2<=(19-15))
      {
        for(int i=0; i<25; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(11, LOW);
          digitalWrite(11, HIGH);
          digitalWrite(11, LOW);
        }
      }
      else
      {
        for(int i=0; i<5; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(11, LOW);
          digitalWrite(11, HIGH);
          digitalWrite(11, LOW);
        }
      }
    }
    else if(flag==3)
    {
      ServoMotor0.write(90);
      ServoMotor1.write(90);
      ServoMotor2.write(90);
      ServoMotor3.write(0);
      digitalWrite(9, LOW);
      delayMicroseconds(2);
      digitalWrite(9, HIGH);
      delayMicroseconds(10);
      digitalWrite(5, LOW);
      duration3=pulseIn(5, HIGH);
      distance3=(duration3/2)/29.1;
      Serial.println(distance3);
      delay(500);
      flag=flag+1;
      Serial.println("Motor 3");
      if(distance3>(19-0) && distance3<=(19-5))
      {
        for(int i=0; i<15; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(9, LOW);
          digitalWrite(9, HIGH);
          digitalWrite(9, LOW);
        }
      }
      else if(distance3>(19-5) && distance3<=(19-10))
      {
        for(int i=0; i<20; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(9, LOW);
          digitalWrite(9, HIGH);
          digitalWrite(9, LOW);
        }
      }
      else if(distance3>(19-10) && distance3<=(19-15))
      {
        for(int i=0; i<25; i++)
        
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(9, LOW);
          digitalWrite(9, HIGH);
          digitalWrite(9, LOW);
        }
      }
      else
      {
        for(int i=0; i<5; i++)
        {
          Serial.println(i+1);
          delay(1000);
          digitalWrite(9, LOW);
          digitalWrite(9, HIGH);
          digitalWrite(9, LOW);
        }
      }
    }
  }
  else
  {
    flag=0;
  }
  // put your main code here, to run repeatedly:

}
