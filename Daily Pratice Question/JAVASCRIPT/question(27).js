// 27. Write a program to extract the file extension from a given filename.
// Example: Input: "document.pdf", Output: "pdf".

var arr="document.pdf"
for(i=0;i<arr.length;i++){
    if(arr[i]=="."){
        
        for(j=i+1;j<arr.length;j++){
            console.log(arr[j])
        }
    }
        
}
