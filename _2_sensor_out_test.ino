
int trigPin = 2;
int echoPin = 12;
int trigPin2 = 3;
int echoPin2 = 13;
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  //pinMode(trigPin3, OUTPUT);
    pinMode(5, OUTPUT);
      pinMode(6, OUTPUT);
        pinMode(7, OUTPUT);
          pinMode(8, OUTPUT);

}

void loop() {
  int duration, distance;
  digitalWrite (trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin, LOW);
  duration = pulseIn (echoPin, HIGH);
  distance = (duration/2) / 29.1;

      Serial.print(distance);   
      Serial.print("cm");
      Serial.println();

  int duration2, distance2;
    digitalWrite (trigPin2, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin2, LOW);
    duration = pulseIn (echoPin2, HIGH);
    distance2 = (duration/2) / 29.1;
    
      Serial.print(distance2);   
      Serial.print("cm");
      Serial.println();


       if(distance>15 && distance2<10)
   {
    digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,LOW);
   delay(250);
   
   }
   else if(distance2>60 && distance>60)
    {
    digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
   delay(250);
   
   }
   else if(distance2<10 && distance<10)
    {
    digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
   delay(250);
   
   }
   
 

  }
