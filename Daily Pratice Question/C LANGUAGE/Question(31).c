// Write a program to repeat a string a specified number of times.
// Example: Input: ("hello", 3), Output: "hellohellohello".

#include <stdio.h>

int main() {
 char str[]="hello";
 int time=3;
 int i;
 for(i=0;i<time;i++){
     printf("%s",str);
 }

    return 0;
}