// 29. Write a program to find all pairs in an array whose sum is equal to a given number.
// Example 1:  Input: nums = [2,7,11,15], target = 9 , Output: [0,1].


#include<stdio.h>

int main(){
    
  int nums[]={2,7,11,15};
    int i;
    int j;
    int len=sizeof(nums)/sizeof(nums[0]);
    
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(nums[i]+nums[j]==9){
                printf("%d\n",i);
                printf("%d\n",j);
            }
        }
    }
    return 0;
}