# Infosec Task

Author: [Shivam Mishra](https://github.com/7shivamx)

## Walkthrough

After making file executable when I used `strings ./rev` it gave a lot of strings but two strings got my main attention, namely `main` and `print_flag`. Then i tried to pass random string which gave output `It's not that easy as you think so`. So i used IDA to decompile the executable file and went to analyze `main` function, and I found that it only calls a print function which says `It's not that easy as you think so`. After this i tried to analyze `print_flag` function  and found that decompilation was really hard to read. Then i tried to set a breakpoint at `main` function using GDB , and used `(gdb) p (int)print_flag()` syntax while running the binary basically to print the output of function, which also printed the flag! 

## Flag

`841f980abd04b26fe804ca0c207a574bef504cb6a3c3599a449e845ca993d2cf`

## Other Possible Method 

One can also try to convert the `print_flag()` function using any text editor in a running c/c++ program
