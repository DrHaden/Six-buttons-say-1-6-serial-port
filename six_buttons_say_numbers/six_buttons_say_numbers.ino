//HI! this is my first arduino serial port communication
//It is now up and running
//When buttons that are plugged into digital 1-6 are pushed the corresponding number is diplayed in serial moniter
//When buttons are not being pushed six 0's are displayed until the buttons is pushed where in this case the number is displayed, the moniter waits then continues

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
  
  delay (100); 
  
  if (buttonState1 == HIGH) {
    Serial.println("01");
      delay (1000);
  }else{
    Serial.println("0");
  }
  if (buttonState2 == HIGH) {
    Serial.println("02");
      delay (1000);
  }else{
    Serial.println("0");
  }
  if (buttonState3 == HIGH) {
    Serial.println("03");
      delay (1000);
  }else{
    Serial.println("0");
  }
  if (buttonState4 == HIGH) {
    Serial.println("04");
      delay (1000);
  }else{
    Serial.println("0");
  }
  if (buttonState5 == HIGH) {
    Serial.println("05");
      delay (1000);
  }else{
    Serial.println("0");
  }
  if (buttonState6 == HIGH) {
    Serial.println("06");
      delay (1000);
  }else{
    Serial.println("0");
  } 
}
