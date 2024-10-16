// 22. Write a program to find the length of 
// a given string.
// Example:Input:inputString = "Hello, World!"; Output:13;



#include <stdio.h>
#include<string.h>

int main() {
   char str[]="Hello, World!";
   int len;
   int i;
   for(i=0;str[i]!='\0';i++){
      len++;
   }
printf("%d",len);
    return 0;
}

// by function


#include <stdio.h>
#include<string.h>

int main() {
   char str[]="Hello, World!";
    int len=strlen(str);
   
printf("%d",len);
    return 0;
}