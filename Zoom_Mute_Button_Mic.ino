// Include button library
#include "OneButton.h"

int button1pin = 0;

// Include DigiKeyboard library
#include "DigiKeyboard.h"

//set up buttons
  OneButton button1(button1pin, true);

void setup() {
//set up button functions

  button1.attachClick(click1);
  //button1.attachLongPressStart(longPressStart1);

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  
}
void loop() {
  //monitor buttons
  button1.tick();
}

// This function will be called when the button1 was pressed 1 time (and no 2. button press followed).
void click1() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  DigiKeyboard.sendKeyStroke(KEY_A, MOD_SHIFT_LEFT | MOD_GUI_LEFT); // Mac Zoom mic mute
  DigiKeyboard.sendKeyStroke(KEY_A, MOD_ALT_LEFT);

} // click1