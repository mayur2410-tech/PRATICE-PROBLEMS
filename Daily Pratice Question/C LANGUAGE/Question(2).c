// 2. Write a function to determine whether a given number is
//  positive, negative, or zero.


#include <stdio.h>


int main() {
  int number=printf("enter your number:  ");
  scanf("%d",&number);
  if(number>0){
      printf("Number is Positive");
  }else if(number<0){
      printf("Number is Negative");
  }else if(number==0){
      printf("Number is zero");
  }
  
  return 0;
}