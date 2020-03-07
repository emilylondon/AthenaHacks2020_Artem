/*

*/
int signal_;
int pulseSensorPurple = 0;
int threshold = 550;
int LED13 = 13;
void setup() {
    pinMode(LED13, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    signal_ = analogRead(pulseSensorPurple);
    Serial.println(signal_);
    
    if(signal_ > threshold){
      digitalWrite(LED13, HIGH);
    }
    else{
      digitalWrite(LED13, LOW);
    }
}
