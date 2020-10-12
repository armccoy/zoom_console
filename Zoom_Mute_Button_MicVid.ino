// Include button library
#include "OneButton.h"

int button1pin = 0;
int button2pin = 2;

// Include DigiKeyboard library
#include "DigiKeyboard.h"

//set up buttons
  OneButton button1(button1pin, true);
  OneButton button2(button2pin, true);

void setup() {
  // put your setup code here, to run once:

  //set up button functions
  button1.attachClick(click1);
  button2.attachClick(click2);

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:

  //monitor buttons
  button1.tick();
  button2.tick();
}

// This function will be called when the button1 was pressed 1 time (and no 2. button press followed).
void click1() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  DigiKeyboard.sendKeyStroke(KEY_A, MOD_SHIFT_LEFT | MOD_GUI_LEFT); // Mac Zoom mic mute

} // click1

// This function will be called when the button2 was pressed 1 time (and no 2. button press followed).
void click2() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_SHIFT_LEFT | MOD_GUI_LEFT); // Mac Zoom video mute

} // click2