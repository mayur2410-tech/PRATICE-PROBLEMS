// 24. Write a program to remove whitespace from both ends of a string.
// Example: Input: " hello ", Output: "hello".



#include <stdio.h>
#include<string.h>

int main() {
   char str[]=" h ell o ";
  int i;
  for(i=0;i<strlen(str);i++){
      if(str[i]!=32){
          printf("%c",str[i]);
      }
  }
    return 0;
}