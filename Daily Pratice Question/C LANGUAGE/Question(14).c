// 14. Add Element to the Beginning of an Array Example: 
// Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].

#include<stdio.h>
  int main(){
      int i;
    int arr[] = {1, 2, 3, 4};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(i=len;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[i]=0;
    len=len+1;
    for(i=0;i<len;i++){
        printf("%d\t",arr[i]);
    }
    
    

return 0;
 }

