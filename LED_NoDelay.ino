// LED 1
#define LED1PIN 12
unsigned long previousTimeLED1Blink = 0;
unsigned long LED1BlinkDelay = 1000;
byte LED1State =LOW;

//LED 2
#define LED2PIN 11
unsigned long previousTimeLED2Blink = 0;
unsigned long LED2BlinkDelay = 750;
byte LED2State =LOW;

//LED 3
#define LED3PIN 10
unsigned long previousTimeLED3Blink = 0;
unsigned long LED3BlinkDelay = 500;
byte LED3State =LOW;

//LED 4
#define LED4PIN 9
unsigned long previousTimeLED4Blink = 0;
unsigned long LED4BlinkDelay = 250;
byte LED4State =LOW;

void setup() {
  pinMode(LED1PIN, OUTPUT);
  pinMode(LED2PIN, OUTPUT);
  pinMode(LED3PIN, OUTPUT);
  pinMode(LED4PIN, OUTPUT);
}

void loop() {
  unsigned long timeNow = millis();
  
  //LED 1
  if (timeNow - previousTimeLED1Blink > LED1BlinkDelay) {
    //action
    previousTimeLED1Blink += LED1BlinkDelay;
    if (LED1State == HIGH) {
      LED1State = LOW;
    }else {
      LED1State = HIGH;
    }
  }
  digitalWrite(LED1PIN, LED1State);

  //LED 2
  if(timeNow -previousTimeLED2Blink > LED2BlinkDelay) {
    //action
    previousTimeLED2Blink += LED2BlinkDelay;
    if (LED2State == HIGH) {
      LED2State = LOW;
    }else {
      LED2State = HIGH;
    }
  }
  digitalWrite(LED2PIN, LED2State);

  //LED 3
    if(timeNow -previousTimeLED3Blink > LED3BlinkDelay) {
      //action
      previousTimeLED3Blink += LED3BlinkDelay;
      if (LED3State == HIGH) {
        LED3State = LOW;
      }else {
        LED3State = HIGH;
      }
    }
    digitalWrite(LED3PIN, LED3State);

  //LED 4
    if(timeNow -previousTimeLED4Blink > LED4BlinkDelay) {
      //action
      previousTimeLED4Blink += LED4BlinkDelay;
      if (LED4State == HIGH) {
        LED4State = LOW;
      }else {
        LED4State = HIGH;
      }
    }
    digitalWrite(LED4PIN, LED4State);
}