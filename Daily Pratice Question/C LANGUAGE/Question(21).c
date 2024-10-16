// 21. Write a program to convert a given string to 
// uppercase.Example: Input: "hello", Output: "HELLO".

#include <stdio.h>
#include<string.h>

int main() {
   char str[]="hello";
   int i;
   for(i=0;i<strlen(str);i++){
       str[i]=str[i]-32;
   }
printf("%s",str);
    return 0;
}