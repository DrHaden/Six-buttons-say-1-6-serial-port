//HI! this is my first arduino serial port communication

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
  
  if (buttonState1 == HIGH) {
  Serial.println("1");
  }else{
  }
  if (buttonState2 == HIGH) {
  Serial.println("2");
  }else{
  }
  if (buttonState3 == HIGH) {
  Serial.println("3");
  }else{
  }
  if (buttonState4 == HIGH) {
  Serial.println("4");
  }else{
  }
  if (buttonState5 == HIGH) {
  Serial.println("5");
  }else{
  }
  if (buttonState6 == HIGH) {
  Serial.println("6");
  }else{
  } 
}
