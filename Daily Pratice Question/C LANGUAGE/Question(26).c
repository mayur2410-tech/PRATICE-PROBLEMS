// 26. Write a program to check if a string ends with a specific 
// character.Example: Input: ("codinggita", "a"), Output: true.

// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
  char str[]="codinggita";
  char character='a';
  int len=strlen(str);
  int i;
  
      if(str[len-1]==character){
          printf("true ");
      }else{
          printf("false");
      
  }

    return 0;
}