int POT1  = A0;//Byron Alejandro Pineda Barrientos
int POT2 = A1;//2022121
int POT3 = A2;
int Lectura1;
int Lectura2;
int Lectura3;
int led1 = 3;
int led2 = 5;
int led3 = 6;

void setup()
{
  Serial.begin(9600);
 pinMode(POT1,INPUT);
   pinMode(led1,OUTPUT);
   pinMode(POT2,INPUT);
   pinMode(led2,OUTPUT);
   pinMode(POT3,INPUT);
   pinMode(led3,OUTPUT);
}

void loop()
{

 Lectura1 = analogRead(POT1)/4;
  analogWrite(led1,Lectura1);
  delay(100);
   Lectura2 = analogRead(POT2)/4;
  analogWrite(led2,Lectura2);
  delay(100);
   Lectura3 = analogRead(POT3)/4;
  analogWrite(led3,Lectura3);
  delay(200);
  Serial.print("codigo RGB R: ");
  Serial.print( Lectura1);
  Serial.print(" ");
  Serial.print( Lectura2);
    Serial.print(" ");
  Serial.println( Lectura3);

    
}