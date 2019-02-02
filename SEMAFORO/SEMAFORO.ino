int rosso1 = 2 ;
int giallo1 = 4 ;
int verde1= 6 ;
int rosso2 = 8 ;
int giallo2= 9 ;
int verde2= 10 ;
String numLampeggi ;
void setup() 
{
  // put your setup code here, to run once:
  pinMode (rosso1, OUTPUT);
  pinMode (giallo1, OUTPUT);
  pinMode (verde1,OUTPUT);
 

}

void loop() 
{
  // put your main code here, to run repeatedly:
digitalWrite(rosso1,HIGH);
LampeggioVerde2();
delay(2000);
digitalWrite(giallo1,HIGH);
digitalWrite(giallo2 , HIGH);
delay(2000);
digitalWrite(rosso1,LOW);
digitalWrite(giallo1,LOW);
digitalWrite(giallo2,LOW);
digitalWrite(rosso2,HIGH);
LampeggioVerde1();
digitalWrite(giallo1,HIGH);
digitalWrite(giallo2,HIGH); 
delay(2000);
digitalWrite(giallo1,LOW);
digitalWrite(giallo2,LOW);
digitalWrite(rosso2,LOW);



 
}

void richiestaValori()   
{

    Serial.print ( "quanti lampeggi verdi?");
  while ( Serial.available() == 0)   {};
  numLampeggi  = Serial.readString().toInt();
}

void LampeggioVerde1(){
  for (int i = 0; i<4; i++)
  {
  digitalWrite(verde1,HIGH);
  delay(500);
  digitalWrite(verde1,LOW);
  delay(500);
  }
  
  


}
void LampeggioVerde2(){
  for (int i = 0; i<4; i++)
  {
  digitalWrite(verde2,HIGH);
  delay(500);
  digitalWrite(verde2,LOW);
  delay(500);
  }
  
  


}
