// 17. Count how many positive and negative numbers are in 
// arr = [1, -2, 3, -4, 5, -6] and print the result.


let arr = [1, -2, 3, -4, 5, -6]
let flag=0
for(i=0;i<arr.length;i++){
    if(arr[i]>0){
        flag++
    }
}console.log("positive number are",flag)
flag=arr.length-flag
console.log("NEgative number are",flag)