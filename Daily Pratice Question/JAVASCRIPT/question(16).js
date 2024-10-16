// 16. Check if all the elements in 
// arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.

let arr = [3, 5, 9, 1, 7] 
let flag=0;
for(i=0;i<arr.length;i++){
    if(arr[i]>0){
        flag++
    }
}if(flag==arr.length){
    console.log("true all elemnts are positive")
}else{
     console.log("false all elemnts are not positive")
}