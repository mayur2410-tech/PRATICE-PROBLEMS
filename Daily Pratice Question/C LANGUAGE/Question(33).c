// 33. Write a program that takes a year as input and checks whether
//  it is a century year (a year divisible by 100).



#include <stdio.h>


void isCenturyYear(int year){
    if(year%100==0){
        printf("Century year");
    }else{
        printf("Not a centuary year");
    }
    
    
}

int main() {
   int year=2000;
   
isCenturyYear(year);
    return 0;
}