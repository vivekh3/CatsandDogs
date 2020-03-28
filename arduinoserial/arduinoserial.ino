int incomingbyte;
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    
    incomingbyte=Serial.read();
    if (incomingbyte=='H'){
      digitalWrite(LED_BUILTIN, HIGH);
            
      
    }
    
    if (incomingbyte=='L'){
      digitalWrite(LED_BUILTIN, LOW);
    }
  }
  
}
