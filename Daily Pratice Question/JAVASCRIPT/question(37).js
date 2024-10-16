// 37. Given a sorted array and a target value, return the 
// starting and ending position of that target in the array.
// Example:Input: [5, 7, 7, 8, 8, 10], target=8 ,Output: [3, 4]


let arr= [5, 7, 7, 8, 8, 10]
let target=8 
let len=arr.length
for(i=0;i<len;i++){
    if(arr[i]==target){
        console.log(i)
    }
}


let arr2= [5, 7, 7, 8, 8, 10]
let arr1=[]
let target1=8 
let len1=arr2.length
for(i=0;i<len1;i++){
    if(arr2[i]==target1){
       arr1.push(i)
    }
}console.log(arr1)

