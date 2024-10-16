// 19. Check if the array arr = [1, 2, 3, 4, 5] is 
// sorted in ascending order, and print true or false.


let arr = [1, 2, 3, 4, 5]
let flag=0
for(i=0;i<arr.length-1;i++){
    if(arr[i]<arr[i+1]){
        flag++
    }
}if(flag==arr.length-1){
    console.log("true given array is asorted asecending order")
}else{
     console.log("false given array is not  sorted in asecending order")
}