// 17. Count how many positive and negative numbers are in
//  arr = [1, -2, 3, -4, 5, -6] and print the result.

#include<stdio.h>
  int main(){

      int arr[] = {-3,-5,-2,-5,-4,-9};
      int i,flag;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++){
        if(arr[i]>0){
            flag++;
        }
    }
    printf("Positve Number in array is %d\n",flag);
flag=len-flag;
printf("Negative Number in array is %d\n",flag);
return 0;
 }
