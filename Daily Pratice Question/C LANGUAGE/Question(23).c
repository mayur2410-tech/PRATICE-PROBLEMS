// 23. Write a program to concatenate two given strings. 
// Example: Input: ("hello", " world"), Output: "hello world".


#include <stdio.h>
#include<string.h>

int main() {
   char str[]="Hello";
   char str1[]=" World!";
    strcat(str,str1);
   
printf("%s",str);
    return 0;
}