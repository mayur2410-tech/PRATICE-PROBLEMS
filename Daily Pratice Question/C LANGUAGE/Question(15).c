// 15. Remove the Last element Input:
//  nums = [1, 2, 3, 4,5]; Output: nums = [1,2,3,4].


#include<stdio.h>
  int main(){

    int arr[] = {1, 2, 3, 4,5};
    int i;
    int len=sizeof(arr)/sizeof(arr[0]);
    len=len-1;
    for(i=0;i<len;i++){
        printf("%d\t",arr[i]);
    }   

return 0;
 }