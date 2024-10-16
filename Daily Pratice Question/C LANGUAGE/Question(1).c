// 1. Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F

#include <stdio.h>
int main() {
  int marks=printf("enter your marks:  ");
  scanf("%d",&marks);
  if(90<=marks && marks<=100){
      printf("Grade A");
  }else if(80<=marks && marks<=89){
       printf("Grade B");
  }else if(70<=marks && marks<=79){
       printf("Grade C");
  }else if(60<=marks && marks<=69){
       printf("Grade D");
  }else if(60>=marks){
       printf("Grade F ");
  }
  return 0;
}