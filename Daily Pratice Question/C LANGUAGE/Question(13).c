// 13. Check if the array arr = [1, 2, 3, 4, 5] 
// contains the number 3 and print true or false.

#include <stdio.h>
#include<string.h>

int main() {
  char arr[]={1,2,3,4,5};
  int flag;
  int length=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<length;i++){
      if(arr[i]==3){
          flag=1;
        
          
      }
  }if(flag==1){
                printf("true it cointain a number");
  }else{
                printf("false it does not cointain a number");
  }
  return 0;
}