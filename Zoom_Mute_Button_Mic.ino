//Elliotmade 4/22/2020<br>//https://elliotmade.com/2020/04/23/physical-mute-button-for-zoom-meetings/
//https://www.youtube.com/watch?v=apGbelheIzg
//Used a digispark clone

//this will switch to the zoom application and mute it or exit on long press
//momentary button on pin 0 with pullup resistor

//https://github.com/mathertel/OneButton
//button library
#include "OneButton.h"

int button1pin = 0;

#include "DigiKeyboard.h"

//set up buttons
  OneButton button1(button1pin, true);

void setup() {
  // put your setup code here, to run once:

//set up button functions

  button1.attachClick(click1);
  //button1.attachLongPressStart(longPressStart1);

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  
}
void loop() {
  // put your main code here, to run repeatedly:
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
  //DigiKeyboard.sendKeyStroke(0, MOD_SHIFT_LEFT | MOD_CONTROL_LEFT | MOD_ALT_LEFT);
  //DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_A, MOD_SHIFT_LEFT | MOD_GUI_LEFT); // Mac Zoom mute
  DigiKeyboard.sendKeyStroke(KEY_A, MOD_ALT_LEFT);

} // click1

//// This function will be called once, when the button1 is pressed for a long time.
//void longPressStart1() {
//  // this is generally not necessary but with some older systems it seems to
//  // prevent missing the first character after a delay:
//  DigiKeyboard.sendKeyStroke(0);
//  
//  // Type out this string letter by letter on the computer (assumes US-style
//  // keyboard)
//  DigiKeyboard.sendKeyStroke(0, MOD_SHIFT_LEFT | MOD_CONTROL_LEFT | MOD_ALT_LEFT);
//  DigiKeyboard.delay(50);
//  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_ALT_LEFT);
//  DigiKeyboard.delay(50);
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);
//
//} // longPressStart1
