// 13. Check if the array arr = [1, 2, 3, 4, 5] 
// contains the number 3 and print true or false.


let arr=[1, 2, 3, 4, 5]
let flag=0
for(i=0;i<arr.length;i++){
    if(arr[i]==3){
        flag=1
    }}
    if(flag==1){
        console.log("true")
    }else{
        console.log("false")
    }


// by function
let arr1=[1, 2, 3, 4, 5]
arr1.includes(3)?console.log("true"):console.log("false");

