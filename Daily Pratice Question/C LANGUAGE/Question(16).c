// 16. Check if all the elements in arr = [3, 5, 9, 1, 7]
//  are positive numbers, and print true or false.


#include<stdio.h>
  int main(){

    int arr[] = {3, 5, -9, 1, 7};
    int i;
    int positive;
    int len=sizeof(arr)/sizeof(arr[0]);
    
    for(i=0;i<len;i++){
       if(arr[i]>0){
           positive++;
       }
    }
    if(len==positive){
        printf("all positive number");
    }
    else{
        printf("not all are positve numbers");
    }

return 0;
 }