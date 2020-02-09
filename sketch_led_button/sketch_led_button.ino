// Declare the variables and initialize it
const int PIN_LED = 12;
const int PIN_BUTTON = 2;

void setup(){
    // Set the PIN_LED as an output
    pinMode(PIN_LED, OUTPUT);
    
    // Set the PIN_BUTON as an input
    pinMode(PIN_BUTTON, INPUT);
}

void loop(){
    // Read the button state condition (HIGH = 1 or LOW = 1)
    int buttonState = digitalRead(PIN_BUTTON);
    
    // Determine the led condition (turn on or turn of) by using button state
    if (buttonState == HIGH) {
      digitalWrite(PIN_LED, LOW);
      delay(2000);
    } else 
      digitalWrite(PIN_LED, HIGH);
}
