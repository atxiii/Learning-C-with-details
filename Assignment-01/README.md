## Assignment 1
Print "Hello, World!" to the terminal

## Example Output
```terminal_session
tokyo:~/LearningC/ # ./assignment1                                        
Hello, World!
```


## How to start and config our workspace:

- First your need to install GCC compiler:
https://jmeubank.github.io/tdm-gcc/download/
I installed version tdm64-gcc-10.3.0-2.exe.

- You can start with your IDE, Here I'm using notepad++.
After coding C we need to comile it, so I want to comile it with notepad++. for this case, I installed NppExec from https://github.com/d0vgan/nppexec/releases/tag/v088 (NppExec_088_dll_x64.zip) and extract it to notepad++ plugin's folder.
Next I imported the blow code to NppExec (Plugins -> NppExec -> Execute NppExec Script)

```
NPP_SAVE

CD $(CURRENT_DIRECTORY)

gcc -g $(FULL_CURRENT_PATH)  -o $(FULL_CURRENT_PATH).exe

$(FULL_CURRENT_PATH).exe
```

- Save it.

- Next restart notepad++, again navigate to Plugins -> NppExec -> Advanced options, find menu item. add a name and select your script. form right side, you can set a Hotkey,I used F1. now click on OK, and restart your notepad.

- Write the code and press ctrl+1 to comile and execute your script. 
you can enable  Plugins -> NppExec -> no internal messages to have clean output.
