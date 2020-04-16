
long distancia;
long tiempo;

void setup(){
  Serial.begin(9600);
  pinMode(9, OUTPUT); 
  pinMode(8, INPUT); 
}

void loop(){
  digitalWrite(9, HIGH); 
  delayMicroseconds(10);
  digitalWrite(9,LOW); 
  
  tiempo=pulseIn(8, HIGH); 
  
  distancia= int((0.034 * tiempo)/ 2); 
  
  Serial.print("Distancia ");
  Serial.print(distancia);
  Serial.println(" cm");
  
  delay(1000);
  }
