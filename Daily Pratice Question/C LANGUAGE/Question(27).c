// 27. Write a program to extract the file extension from a given filename.
// Example: Input: "document.pdf", Output: "pdf".

#include <stdio.h>
#include<string.h>

int main() {
  char str[]="document.pdf";
 int i;
 for(i=0;i<strlen(str);i++){
     if(str[i]=='.'){
         int j;
         for(j=i+1;j<strlen(str);j++){
             printf("%c",str[j]);
         }
     }
 }

    return 0;
}