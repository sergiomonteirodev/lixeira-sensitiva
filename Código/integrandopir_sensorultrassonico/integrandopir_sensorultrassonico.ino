//                                                                                               "NATURAL"

  // ultima alteraçao  - dia 20-10-2015, altreraçao na linha 390, de 29 pra 60 microsegundos.
  // Ultima alteraçao - di 28-10-2015, alteraçao na  linha 168
  // Ultima alteraçao - dia 29-10-2015 Foi detectado que ao movimentar a tampa da lixeira o sensor pir se auto ativa
  //Ultima alteraçao - dia 216-11-2015 O PROBLEMA FOI CORRIGIDO, POREM AGORA COM O DELAY O SENSOR DE DISTANCIA PERDE SUA FUNÇAO DURANTE 2 SEGUNDOS
  // ultimaa alteraçao - dia 18/11/2015 corrigindo delay de espera ate a posicao certa do motor ate fechar a tampa

#define NOTE_  00
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

#include <TrueRandom.h>

#include <Ultrasonic.h>



//vassourinhas
int notes[] = {NOTE_,NOTE_,NOTE_E5,NOTE_,NOTE_A5,NOTE_,NOTE_A5,NOTE_,NOTE_G5,NOTE_FS5,NOTE_,NOTE_,NOTE_B5,NOTE_,NOTE_F5,NOTE_E5,NOTE_F5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_F5,NOTE_,NOTE_,NOTE_E5,NOTE_D5,NOTE_E5,NOTE_D5,NOTE_E5,NOTE_F5,NOTE_E5,NOTE_,NOTE_,NOTE_F5,NOTE_E5,NOTE_F5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_D5,NOTE_C5,NOTE_B4,NOTE_A5,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_E5,NOTE_,NOTE_,NOTE_E5,NOTE_,NOTE_,NOTE_,NOTE_,NOTE_F5,NOTE_E5,NOTE_F5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_F5,NOTE_,NOTE_,NOTE_E5,NOTE_D5,NOTE_E5,NOTE_D5,NOTE_E5,NOTE_F5,NOTE_E5,NOTE_,NOTE_,NOTE_F5,NOTE_E5,NOTE_F5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_D5,NOTE_C5,NOTE_B4,NOTE_A5,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_E5,NOTE_,NOTE_,NOTE_E5,NOTE_,NOTE_,NOTE_,NOTE_,NOTE_G5,NOTE_,NOTE_F5,NOTE_,NOTE_,};
int durations[] = {1000.0000000000001,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,1000.0000000000001,500.00000000000006,250.00000000000003,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,1500.0,500.00000000000006,500.00000000000006,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,1500.0,500.00000000000006,500.00000000000006,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,250.00000000000003,500.00000000000006,1000.0000000000001,1000.0000000000001,500.00000000000006,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,1500.0,500.00000000000006,500.00000000000006,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,1500.0,500.00000000000006,500.00000000000006,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,250.00000000000003,500.00000000000006,1000.0000000000001,1000.0000000000001,500.00000000000006,875.0000000000001,125.00000000000001,250.00000000000003,250.00000000000003,1000.0000000000001,};
int melody_size = 98;

//de chapeu de sol aberto 
int notes2[] = {NOTE_,NOTE_D4,NOTE_B3,NOTE_G3,NOTE_B3,NOTE_D4,NOTE_C4,NOTE_A3,NOTE_D4,NOTE_B3,NOTE_G3,NOTE_D4,NOTE_B3,NOTE_G3,NOTE_D4,NOTE_C4,NOTE_A3,NOTE_E4,NOTE_D4,NOTE_,NOTE_G4,NOTE_,NOTE_,NOTE_,NOTE_D4,NOTE_E4,NOTE_D4,NOTE_B4,NOTE_,NOTE_A4,NOTE_,NOTE_G4,NOTE_,NOTE_D4,NOTE_B3,NOTE_G3,NOTE_B3,NOTE_D4,NOTE_C4,NOTE_A3,NOTE_D4,NOTE_B3,NOTE_G3,NOTE_D4,NOTE_B3,NOTE_G3,NOTE_D4,NOTE_C4,NOTE_A3,NOTE_E4,NOTE_D4,NOTE_,NOTE_G4,NOTE_,NOTE_,NOTE_,NOTE_D4,NOTE_E4,NOTE_D4,NOTE_B4,NOTE_,NOTE_A4,NOTE_,NOTE_G4,NOTE_,NOTE_B3,NOTE_A3,NOTE_G3,NOTE_F3,NOTE_E3,NOTE_D3,NOTE_C4,NOTE_,NOTE_G3,NOTE_A3,NOTE_G3,NOTE_G3,NOTE_,NOTE_F3,NOTE_E3,NOTE_D4,NOTE_C4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_,NOTE_G4,NOTE_,NOTE_,NOTE_,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_,NOTE_G4,NOTE_,NOTE_F4,NOTE_,NOTE_,NOTE_,NOTE_B3,NOTE_C4,NOTE_D4,NOTE_E4,NOTE_D4,NOTE_C4,NOTE_D4,NOTE_E4,NOTE_,NOTE_D4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_A4,NOTE_F4,NOTE_,NOTE_E4,NOTE_D4,NOTE_C4,NOTE_C4,NOTE_B3,NOTE_A3,NOTE_E4,NOTE_D4,NOTE_B3,NOTE_G3,};
int durations2[] = {125.00000000000001,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,125.00000000000001,250.00000000000003,250.00000000000003,250.00000000000003,375.0,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,125.00000000000001,250.00000000000003,250.00000000000003,250.00000000000003,437.50000000000006,62.50000000000001,250.00000000000003,500.00000000000006,1000.0000000000001,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,125.00000000000001,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,125.00000000000001,250.00000000000003,250.00000000000003,250.00000000000003,375.0,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,125.00000000000001,250.00000000000003,250.00000000000003,250.00000000000003,437.50000000000006,62.50000000000001,250.00000000000003,500.00000000000006,1000.0000000000001,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,125.00000000000001,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,125.00000000000001,250.00000000000003,500.00000000000006,250.00000000000003,333.33333333333337,333.33333333333337,333.33333333333337,750.0,250.00000000000003,750.0,750.0,500.00000000000006,250.00000000000003,125.00000000000001,125.00000000000001,125.00000000000001,125.00000000000001,250.00000000000003,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,2000.0000000000002,250.00000000000003,250.00000000000003,125.00000000000001,125.00000000000001,125.00000000000001,125.00000000000001,375.0,125.00000000000001,125.00000000000001,125.00000000000001,500.00000000000006,250.00000000000003,125.00000000000001,125.00000000000001,125.00000000000001,125.00000000000001,375.0,125.00000000000001,250.00000000000003,500.00000000000006,333.33333333333337,333.33333333333337,333.33333333333337,333.33333333333337,333.33333333333337,333.33333333333337,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,};
int melody_size2 = 129;

//cala boca menino
int notes3[] = {NOTE_,NOTE_G4,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_C4,NOTE_,NOTE_E4,NOTE_,NOTE_C4,NOTE_F4,NOTE_,NOTE_E4,NOTE_D4,NOTE_,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_D4,NOTE_G4,NOTE_,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_C4,NOTE_,NOTE_,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_C4,NOTE_,NOTE_E4,NOTE_,NOTE_C4,NOTE_F4,NOTE_,NOTE_E4,NOTE_D4,NOTE_,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_D4,NOTE_G4,NOTE_,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_C4,NOTE_,NOTE_,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_F4,NOTE_A4,NOTE_,NOTE_F4,NOTE_,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_,NOTE_G4,NOTE_G4,NOTE_,NOTE_G4,NOTE_D4,NOTE_,};
int durations3[] = {125.00000000000001,250.00000000000003,125.00000000000001,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,437.50000000000006,62.50000000000001,250.00000000000003,250.00000000000003,125.00000000000001,125.00000000000001,1000.0000000000001,500.00000000000006,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,437.50000000000006,62.50000000000001,250.00000000000003,250.00000000000003,250.00000000000003,750.0,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,437.50000000000006,62.50000000000001,250.00000000000003,250.00000000000003,125.00000000000001,125.00000000000001,1000.0000000000001,500.00000000000006,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,437.50000000000006,62.50000000000001,250.00000000000003,250.00000000000003,250.00000000000003,750.0,250.00000000000003,1000.0000000000001,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,437.50000000000006,62.50000000000001,1000.0000000000001,250.00000000000003,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,500.00000000000006,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,};
int melody_size3 = 77;

//sabe la o que e isso
int notes4[] = {NOTE_,NOTE_G4,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_C4,NOTE_,NOTE_E4,NOTE_,NOTE_C4,NOTE_F4,NOTE_,NOTE_E4,NOTE_D4,NOTE_,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_D4,NOTE_G4,NOTE_,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_C4,NOTE_,NOTE_,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_C4,NOTE_,NOTE_E4,NOTE_,NOTE_C4,NOTE_F4,NOTE_,NOTE_E4,NOTE_D4,NOTE_,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_D4,NOTE_G4,NOTE_,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_C4,NOTE_,NOTE_,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_F4,NOTE_A4,NOTE_,NOTE_F4,NOTE_,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_,NOTE_G4,NOTE_G4,NOTE_,NOTE_G4,NOTE_D4,NOTE_,NOTE_,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_D4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_C5,NOTE_,NOTE_,NOTE_C5,};
int durations4[] = {125.00000000000001,250.00000000000003,125.00000000000001,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,437.50000000000006,62.50000000000001,250.00000000000003,250.00000000000003,125.00000000000001,125.00000000000001,1000.0000000000001,500.00000000000006,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,437.50000000000006,62.50000000000001,250.00000000000003,250.00000000000003,250.00000000000003,750.0,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,437.50000000000006,62.50000000000001,250.00000000000003,250.00000000000003,125.00000000000001,125.00000000000001,1000.0000000000001,500.00000000000006,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,437.50000000000006,62.50000000000001,250.00000000000003,250.00000000000003,250.00000000000003,750.0,250.00000000000003,1000.0000000000001,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,437.50000000000006,62.50000000000001,1000.0000000000001,250.00000000000003,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,500.00000000000006,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,250.00000000000003,500.00000000000006,250.00000000000003,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,500.00000000000006,250.00000000000003,250.00000000000003,125.00000000000001,125.00000000000001,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,250.00000000000003,437.50000000000006,};
int melody_size4 = 95;
// hz do som
int pinOut = 52;
int freq = 200;
int duration = 500;
int t;
int ligado;
int num_pins = 4;
int timer = 50;
int led []= {45,47,49};
int ledBranco = 4, SPir = 22 ; 
const int trigPin = 46;  // trig cor do fio  laranj pra roxo
const int echoPin = 44; // cor do echo amaarelo praa marrom 
#include <Servo.h> 
int leitura;
Servo myservo; // CRIA UM OBJETO SERVO
void setup(){
  int i;
for (i=0;i<num_pins; i++){
pinMode(led[i],OUTPUT);}

 pinMode(pinOut,OUTPUT);
myservo.attach(24);  //  CONFIGURA O OBJETO SERVO COMO PORTA 24, jumper de zul pr azul 
pinMode(trigPin,OUTPUT);  // CONFIGURA O PINO DO SENSOR ULTRASSONIC COMO EMISSOR
pinMode(echoPin,INPUT);   // CONFIGUA O PINO  ||                     COMO RECEPITOR
pinMode(SPir,INPUT);  // CONFIGURA O PINO DO SENSOR PIR COMO UMA ENTRADA DE SINAL
pinMode(ledBranco,OUTPUT); //
Serial.begin(9600);
}


void loop(){

   
 leitura = digitalRead(SPir);
//Serial.println(leitura);

  if(leitura >= 1 && myservo.read()==10/*&& microsecondsToCentimeters(duration) < 20*/){
    //ALGORITMO - SE O SENSOR PIR DETECTAR ALGUM MOVIMENTO, ABRA A TAMPA.
//SE O SENSOR DE DISTANCIA DETECTAR ALGUM LIXO, EMITIR UM SOM E PISCAR OS LEDS
 
     
  SUtra();//interaçao led
    myservo.write(75);
    delay(1500); // abre a tampa
       while(t<=400){ 
   
       SUtra2();
       delay(10);
       t=t+1;
     
        }
        t=0;
   // digitalWrite(ledBranco,HIGH);
//delay(5000);
}
  
  
  else  {   
   
   //digitalWrite(ledBranco,LOW);
  myservo.write(10);
  delay(5000);
  //leitura == 0;
 // while(leitura){
  //;
  //}
  
  
  }
  

}
// fim void loop
void SUtra(){
  /* long duration, inches, cm;


  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  // convert the time into a distance
  //inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
 
 
   */
   
    

   
  
   //  if ( cm ==10)
             {
   
               
    //      int t = 1;
          int i;
        //   while( t <= 5 ){
  for (i = 0; i < num_pins; i++) { // varrer cada pino...
    digitalWrite(led[i], HIGH);   // ligando-o,
    delay(timer);                  // pausando-o,
    digitalWrite(led[i], LOW);    // e desligando-o.
  }
  for (i = num_pins - 1; i >= 0; i--) { 
    digitalWrite(led[i], HIGH);
    delay(timer);
    digitalWrite(led[i], LOW);
  }
   ////  t = t+1; 
      //}
      //  }
 //else{}
  
  }
 
 // else{digitalWrite(ledRed,LOW);myservo.write(90);  }
  //Serial.print(inches);
 // Serial.print("in, ");
  //Serial.print(cm);
  //Serial.print("cm");
  //Serial.println();
  
  //delay(25);
//}

/*long microsecondsToInches(long microseconds)
{
  // According to Parallax's datasheet for the PING))), there are
  // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per
  // second).  This gives the distance travelled by the ping, outbound
  // and return, so we divide by 2 to get the distance of the obstacle.
  // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf
  return microseconds / 74 / 2;
}*//*
}
long microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
  */
  }
  
  
  void SUtra2(){
   
   
    long duration, inches, cm;


  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  // convert the time into a distance
  //inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
 
 
   

  
    if ( myservo.read() == 75 && cm >=9 && cm <=35){
    
       switch (TrueRandom.random(1,5))
      {
        case 1:
        //vassourinhas
        {
          for (int thisNote = 0; thisNote < melody_size + 1; thisNote++) {
    
          int noteDuration = durations[thisNote];
          tone(pinOut, notes[thisNote], noteDuration);
      
          delay(noteDuration - 100);
          noTone(pinOut);
          }
          break;         
        }
        
        case 2:
        //de chapeu de sol aberto
        {
          for (int thisNote2 = 0; thisNote2 < melody_size2 + 1; thisNote2++) {
        
            int noteDuration2 = durations2[thisNote2];
            tone(pinOut, notes2[thisNote2],noteDuration2);
        
            delay(noteDuration2);
            noTone(pinOut);
          }
        
          delay (100);
          break;
        }
        
        case 3:
        //cala boca menino
        {
          for (int thisNote3 = 0; thisNote3 < melody_size3 + 1; thisNote3++) {
        
            int noteDuration3 = durations3[thisNote3];
            tone(pinOut, notes3[thisNote3],noteDuration3);
        
            delay(noteDuration3);
            noTone(pinOut);
          }
        
          delay (100);
          break;
        }
        
        case 4:
        //sabe la o que e isso
        {
          for (int thisNote4 = 0; thisNote4 < melody_size4 + 1; thisNote4++) {
        
            int noteDuration4 = durations4[thisNote4];
            tone(pinOut, notes4[thisNote4],noteDuration4);
        
            delay(noteDuration4);
            noTone(pinOut);
          }
        
          delay (100);
          break;
        }

      
      }
   
    }
      
            
   
 
 // else{digitalWrite(ledRed,LOW);myservo.write(90);  }
  //Serial.print(inches);
 // Serial.print("in, ");
  //Serial.print(cm);
  //Serial.print("cm");
  //Serial.println();
  
  //delay(25);
//}

/*long microsecondsToInches(long microseconds)
{
  // According to Parallax's datasheet for the PING))), there are
  // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per
  // second).  This gives the distance travelled by the ping, outbound
  // and return, so we divide by 2 to get the distance of the obstacle.
  // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf
  return microseconds / 74 / 2;
}*/



}
long microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
 
  }
  
  

