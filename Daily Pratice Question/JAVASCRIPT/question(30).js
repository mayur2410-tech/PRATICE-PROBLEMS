// 30. Write a program to input an integer 'n' and print the sum of all its even 
// digits and the sum of all its odd digits separately. 
// Example : Input: 'n' = 132456, Output: 12, 9

// by taking array
let arr=[1,3,2,4,5,6]
let odd=0
let even=0
for(i=0;i<arr.length;i++){
    if(arr[i]%2==0){
        even+=arr[i]
    }else{
        odd+=arr[i]
    }
}console.log(even)
console.log(odd)


// without taking array
let arr1=132456
let odd1=0
let even1=0
let rem=0
while(arr1>0){
    rem=arr1%10
    if(rem%2==0){
        even1+=rem
    }else{
        odd1+=rem
    }
    arr1=Math.floor(arr1/10)
}
console.log(even1)
console.log(odd1)