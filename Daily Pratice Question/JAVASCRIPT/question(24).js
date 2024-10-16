// 24. Write a program to remove whitespace from both ends of a string.
// Example: Input: " hello ", Output: "hello".


var arr="h  e l lo"
 var removespace=''

for(i=0;i<arr.length;i++){
    if(arr[i]!==' '){
        removespace+=arr[i]
        
    }
}console.log(removespace)



