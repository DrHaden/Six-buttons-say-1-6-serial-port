//HI! this is my first arduino serial port communication
//I have not got it working yet but I will keep trying
const int button1 = 1;
const int button2 = 2;
const int button3 = 3;
const int button4 = 4;
const int button5 = 5;
const int button6 = 6;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;


void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(button6, INPUT);
}

void loop() {
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);
  buttonState5 = digitalRead(button5);
  buttonState6 = digitalRead(button6);
  
  delay (200);
  
  if (buttonState1 == HIGH) {
  Serial.println("01");
  }else{
    Serial.println("0");
  }
  if (buttonState2 == HIGH) {
  Serial.println("02");
  }else{
    Serial.println("0");
  }
  if (buttonState3 == HIGH) {
  Serial.println("03");
  }else{
    Serial.println("0");
  }
  if (buttonState4 == HIGH) {
  Serial.println("04");
  }else{
    Serial.println("0");
  }
  if (buttonState5 == HIGH) {
  Serial.println("05");
  }else{
    Serial.println("0");
  }
  if (buttonState6 == HIGH) {
  Serial.println("06");
  }else{
    Serial.println("0");
  } 
}
