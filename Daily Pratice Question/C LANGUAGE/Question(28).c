// 28. Write a function that takes two numbers and
//  prints the largest one.Example:
//  Input:number1 = 10;, Number2= 20; Output:20;


#include <stdio.h>
void larger(int x, int y){
    if(x>y){
        printf("%d is grater",x);
    }else{
        printf("%d is greater",y);
    }
}

int main() {
    larger(10,20);
   
   
}