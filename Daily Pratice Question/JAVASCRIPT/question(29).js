// 29.Write a program to find all pairs in an array whose sum is equal to a given number.
// Example 1:  Input: nums = [2,7,11,15], target = 9 , Output: [0,1].

let nums = [2,7,11,15]
let target = 9
for(i=0;i<nums.length;i++){
    for(j=i+1;j<nums.length;j++){
        if(nums[i]+nums[j]==target){
            console.log(i)
            console.log(j)
        }
    }
}