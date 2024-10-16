// 9. Sort an Array in Ascending Order Example:
//  Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].


#include <stdio.h>

int main() {
   int arr[] = {4,2,8,5,1};
   int sort;
   int i,j;
   int len=sizeof(arr)/sizeof(arr[0]);
   for(j=0;j<len;j++){
       for(i=0;i<len;i++){
           if(arr[i]>arr[i+1]){
               sort=arr[i+1];
               arr[i+1]=arr[i];
               arr[i]=sort;
        
           }
       }
   }
for(i=0;i<len;i++){
    printf("%d\t",arr[i]);
}
      
      return 0;
}