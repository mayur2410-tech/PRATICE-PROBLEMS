// 4. Write a function to check whether a given character
//  is a vowel or consonant.

#include <stdio.h>
#include<ctype.h>

int main() {
    
char character=printf("\n Enter your character:  ");
scanf("%c",&character);
  if(character=='a'||character=='e' ||character=='i' ||character=='o' ||character=='u'
  ||character=='A'||character=='E' ||character=='I' ||character=='O' ||character=='U'){
      printf(" Given Character Is Vowel");
  }else{
      printf("given character is consonant");
  }
  return 0;
    
}