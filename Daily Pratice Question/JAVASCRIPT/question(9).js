// 9. Sort an Array in Ascending Order 
// Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].

let arr=[4,2,8,5,1]
let sort=0;
for(j=0;j<arr.length;j++){
    for(i=0;i<arr.length;i++){
        if(arr[i]>arr[i+1]){
            sort=arr[i+1]
            arr[i+1]=arr[i]
            arr[i]=sort
        }
    }
}console.log(arr)

// by function
let arr1=[4,2,8,5,1]
arr1.sort()

console.log(arr1)