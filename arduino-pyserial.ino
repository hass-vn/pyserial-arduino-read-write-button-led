int cur_state = 0;
int last_state = 0;
int pushButton = 2;
int temp = 1;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pushButton, INPUT);
Serial.begin(9600); // set the baud rate
}
void loop() {
char inByte = ' ';
button();
if(Serial.available()){ // only send data back if data has been sent
char inByte = Serial.read(); // read the incoming data
if(( inByte =='1') and (temp == 1)){
  digitalWrite(LED_BUILTIN, HIGH);// send the data back in a new line so that it is not all one long line
  temp = 0;
}else{
  digitalWrite(LED_BUILTIN, LOW);// send the data back in a new line so that it is not all one long line
  temp = 1;
}
}
}
void button(){
  cur_state = digitalRead(pushButton); 
  if((cur_state != last_state) and (cur_state == 1)){
    Serial.println(cur_state);
  }
  // print out the state of the button:
  last_state = cur_state;
}
