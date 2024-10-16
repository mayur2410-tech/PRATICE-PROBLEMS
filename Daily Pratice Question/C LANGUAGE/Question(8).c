// 8. Find the Average of an Array.
 #include <stdio.h>

int main() {
   int arr[] = {1, 2, 3, 4,5};
   int sum;
   int i;
   int avg;
   int len=sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<len;i++){
       sum=sum+arr[i];
   }
avg=sum/len;
printf("Avg of an array is %d",avg);
      
      return 0;
}