
int buton=2;
int led1=3;
int led2=4;
int led3=5;
int led4=6;

void setup() {

 pinMode(buton,INPUT); 
 pinMode(led1,OUTPUT); 
 pinMode(led2,OUTPUT); 
 pinMode(led3,OUTPUT); 
 pinMode(led4,OUTPUT);
  

}

void loop() {
 if(digitalRead(buton) == HIGH)
 { 

    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);}
   
else 
{

      digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);  
}
 

}
