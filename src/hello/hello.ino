int led1 = 8;
int led2 = 9;
int led3 = 10;

void setup() {                
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);  
  pinMode(led3, OUTPUT);
}

void offAll(){
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);  
}

void loop() {
  digitalWrite(led1, HIGH);  
  delay(1000);               
  offAll();    
  delay(100);
  digitalWrite(led2, HIGH); 
  delay(1000);               
  offAll();    
  delay(100);
  digitalWrite(led3, HIGH); 
  delay(1000);               
  offAll();    
  delay(100);
}
