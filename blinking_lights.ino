int captain = 35;
int crunch=2;


void setup ()  {
      pinMode (3, OUTPUT); 
      pinMode (5, OUTPUT);
      pinMode (7, OUTPUT);
      pinMode (9, OUTPUT);
      pinMode (11, OUTPUT);
     
   }

void loop() {
captain = analogRead(crunch);
digitalWrite(3,HIGH);
digitalWrite(5,HIGH);
delay(captain);
captain = analogRead(crunch);
digitalWrite(7,HIGH);
digitalWrite(3,LOW);
delay(captain);
captain = analogRead(crunch);
digitalWrite(9,HIGH);
digitalWrite(5,LOW);
delay(captain);
captain = analogRead(crunch);
digitalWrite(11,HIGH);
digitalWrite(7,LOW);
delay(captain);
captain = analogRead(crunch);
digitalWrite(9,LOW);
delay(captain);

digitalWrite(9,HIGH);
captain = analogRead(crunch);
delay(captain);
digitalWrite(7,HIGH);
digitalWrite(11,LOW);
delay(captain);
captain = analogRead(crunch);
digitalWrite(5,HIGH);
digitalWrite(9,LOW);
delay(captain);
digitalWrite(3,HIGH);
captain = analogRead(crunch);
digitalWrite(7,LOW);
delay(captain);
digitalWrite(5,LOW);
delay(captain);
captain = analogRead(crunch);      
      }
