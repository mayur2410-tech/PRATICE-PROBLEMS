// 20. Find and print the difference between the
//  maximum and minimum elements in arr = [80, 30, 70, 50, 20].

let arr = [80, 30, 70, 50, 20]
let max=arr[0]
let min=arr[0]
for(i=0;i<arr.length;i++){
    if(arr[i]>max){
        max=arr[i]
    }
    if(arr[i]<min){
        min=arr[i]
    }
}console.log("max=",max)
console.log("min=",min)
console.log("difference is ",max-min)



// by function

let arr1 = [80, 30, 70, 50, 20]
let difference1=0;
arr.sort()
difference1=arr1[arr1.length-1]-arr[0]
console.log(difference1)


