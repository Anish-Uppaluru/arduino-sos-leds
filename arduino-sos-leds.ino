
 int pin11=11;
 int pin10=10;
 int pin9=9;
 int pin6=6;
void setup()
{
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
    for(int i=0;i<3;i++)
    {digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
         digitalWrite(6,HIGH);
      delay(250);
      
      digitalWrite(11,LOW);
         digitalWrite(10,LOW);
         digitalWrite(9,LOW);
          digitalWrite(6,LOW);
     delay(250);}
   
     delay(500);
      
   for(int i=3;i<6;i++)
   { digitalWrite(11,HIGH); 
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(6,HIGH);
      delay(750);
       
          digitalWrite(11,LOW);
     digitalWrite(10,LOW);
     digitalWrite(9,LOW);
        digitalWrite(6,LOW);
    delay(250);}
  

  
        delay(500);
  
   for( int i=6;i<9;i++)
   {digitalWrite(11,HIGH);
     digitalWrite(10,HIGH);
     digitalWrite(9,HIGH);
         digitalWrite(6,HIGH);
         delay(250);
           
       
           digitalWrite(11,LOW);
            digitalWrite(10,LOW);
              digitalWrite(9,LOW);
                digitalWrite(6,LOW);
    delay(250);}
               
  
   delay(1000);
}
  
  
  
  
  
