// 5. Write a function that checks if a person is eligible to vote.
//  The person is eligible if they are 18 years old or older.


#include <stdio.h>

int main() {
    int age=printf("Enter your Age ");
    scanf("%d",&age);
    if(age>=18){
        printf("You are eligible to vote");
    }else
    printf("You are  not eligible to vote");
    

  return 0;
    
}