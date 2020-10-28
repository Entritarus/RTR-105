# RTR-105
## Datormācība (pamatkurss) elektroniskā klade

###### **Important commands**

**`man` - view manual for a command**

`clear` - clear screen

`history` - list all executed commands

`uname (-a)` - show system name

`whoami` - print username

`pwd` - print working directory

`ls -lt` - DOS `dir` analog

`cd <directory name>` - change directory

`mkdir <directory name>` - make directory

`nano <filename>` - open terminal text editor

`<program name> &` - start in background

`init 0` - shut down the computer

`cat <filename>` - print file contents

`hexdump <filename>` - print file contents in hexadecimal format

`rm <filename>` - delete file

`rmdir <directory name>` - delete directory

`mv <filename> <destination>` - move or copy a file

`chmod <privilege number> <filename>` - modify file privileges

`echo <something>` - print something on screen

## Tastatūras saīsinājumi

|Shortcut |Description                                                                        |
|---------|-----------------------------------------------------------------------------------|
|Ctrl + A |Go to the beginning of the line you are currently typing on                        |
|Ctrl + E |Go to the end of the line you are currently typing on                              |
|Ctrl + L |Clears the screen                                                                  |
|Ctrl + U |Clears the line before the cursor position                                         |
|Ctrl + H |Backspace analog                                                                   |
|Ctrl + R |Let's you search through previously used commands                                  |
|Ctrl + C |Kill whatever you are running                                                      |
|Ctrl + D |Exit the current shell                                                             |
|Ctrl + Z |Puts whatever you are running into a suspended background process. fg restores it. |
|Ctrl + W |Delete the word before the cursor                                                  |
|Ctrl + K |Clear the line after the cursor                                                    |
|Ctrl + T |Swap the last two characters before the cursor                                     |
|Esc + T  |Swap the last two words before the cursor                                          |
|Alt + F  |Move cursor forward one word on the current line                                   |
|Alt + B  |Move cursor backward one word on the current line                                  |
|Tab      |Auto-complete files and folder names                                               |

## Failu sistēmas pētīšana

**Case sensitive, _abc != Abc_**

- Absolute address - _/home/user_

- Relative address - _../Desktop/_

- _~_ - user's home directory, can be changed on to with calling `cd` without arguments 

######**How to make a file**

1. `touch <filename>`
2. `echo <something> > <filename>` - overwrite the file
3. `echo <something> >> <filename>` - append the file

- __"*"__ works like in DOS



## Scripts
- **This one in the beginning of a file**

```Shell
#!/bin/bash
``` 

**is a must when creating a bash script**

- **To grant an execution privilege to a file for current user:**
```Shell
chmod 744 <filename>
```
_7 == 111 rwx_
_4 == 100 r--_
_4 == 100 r--_

```Shell
# this is a comment in Bash
```

###### **Variables**
