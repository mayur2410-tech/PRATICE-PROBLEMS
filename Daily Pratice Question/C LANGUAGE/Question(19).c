// 19. Check if the array arr = [1, 2, 3, 4, 5] is
//  sorted in ascending order, and print true or false.

#include<stdio.h>
  int main(){

          int arr[] = {1,2,3,4,5};
      int i;
       int ascending;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len-1;i++){
        if(arr[i]<=arr[i+1]){
           ascending++;
        }
            
        }if(ascending==len-1){
            printf("true array is in ascending order");
            
        }else{
             printf("false array is not in ascending order");
        }
    
return 0;
 }