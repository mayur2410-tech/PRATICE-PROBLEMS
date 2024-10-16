// 3. Write a function that takes three sides of a triangle and
//  checks whether the triangle is 
//  equilateral, isosceles, or scalene.


#include <stdio.h>
int main() {
    
  int side1=printf("\nEnter side one:");
  scanf("%d",&side1);
  
  int side2=printf(" \nEnter side two: ");
  scanf("%d",&side2);
  
  int side3=printf(" \nEnter side three: ");
  scanf("%d",&side3);
  
  if(side1==side2 &&side2==side3){
      printf("Triangle is Equilateral");
  }else if(side1==side2 || side2==side3 || side1==side3){
     printf("Triangle is Isosceles"); 
  }else if(side1!=side2 && side2!=side3){
      printf("Triangle is Scalene");
  }
  return 0;
    
}