// 20. Find and print the difference between the maximum 
// and minimum elements in arr = [80, 30, 70, 50, 20].

#include <stdio.h>

int main() {
   int arr[] = {80, 30, 70, 50, 20};
   int min=arr[0];
   int max=arr[0];
   int i;
   int len=sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<len;i++){
       if(arr[i]>max){
           max=arr[i];
       }
       if(arr[i]<min){
           min=arr[i];
       }
   }printf("max=%d\n",max);
   printf("min=%d\n",min);
   printf("Difference is %d",max-min);

    return 0;
}