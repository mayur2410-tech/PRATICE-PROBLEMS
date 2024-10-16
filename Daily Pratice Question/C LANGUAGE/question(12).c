// 12. Add the number 6 to the end of the array
//  arr = [1, 2, 3, 4, 5] and print the updated array.


#include<stdio.h>
  int main(){
   int i;      
 int arr[] = {1, 2, 3, 4, 5};
int len=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<len;i++){
    arr[len]=6;
}
len=len+1;
for(i=0;i<len;i++){
    printf("%d\t",arr[i]);
}

return 0;
 }