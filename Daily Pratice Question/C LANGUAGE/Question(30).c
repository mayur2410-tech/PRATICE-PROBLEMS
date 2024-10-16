// 30. Write a program to input an integer 'n' and print 
// the sum of all its even digits and the sum of all its odd digits separately.
//  Example : Input: 'n' = 132456, Output: 12, 9
// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9

// considering the n in array
#include<stdio.h>

int main(){
    
  int arr[]={1,3,2,4,5,6};
    int i;
    int even=0;
    int odd=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++){
        if(arr[i]%2==0){
            even=even+arr[i];
        }else{
            odd=odd+arr[i];
        }
    }
    printf("Addition of even numbers are %d\n",even);
    printf("addition of odd numbers are %d",odd);
    return 0;
}

// considering without array


#include <stdio.h>

int main() {
 int n=132456;
 int rem;
 int even=0;
 int odd=0;
while(n>0){
    rem=n%10;
    if(rem%2==0){
        even=even+rem;
    }else{
        odd=odd+rem;
    }
    n=n/10;
}printf("%d\n",even);
printf("%d\n",odd);
    return 0;
}
