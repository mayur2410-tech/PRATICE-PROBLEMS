// 14. Add Element to the Beginning of an Array 
// Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].

let arr = [1, 2, 3, 4]; 
for(i=arr.length;i>0;i--){
    arr[i]=arr[i-1]
}
arr[i]=0
console.log(arr)

// by function
let nums = [1, 2, 3, 4]; 
nums.unshift(0)
console.log(nums)