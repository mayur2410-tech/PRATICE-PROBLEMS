// 10. Given an array of integers, count how many numbers are even and how many are odd.
// Examplef
// Input: [1, 2, 3, 4, 5]
// Output: Even: 2, Odd: 3

let arr=[1, 2, 3, 4, 5]
let even=0;
let odd=0;
for(i=0;i<arr.length;i++){
    if(arr[i]%2==0){
      even++
  
    }
    odd=arr.length-even
}console.log("even number are",even)
console.log("odd number are",odd)



