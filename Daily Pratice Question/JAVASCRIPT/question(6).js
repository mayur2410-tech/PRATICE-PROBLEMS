// 6. Write a function that checks if a username and password match predefined values. 
// If the username is "admin" and the password is "1234", 
// print "Login successful"; otherwise, print "Login failed."

var username="admin"
let password=1234
function loginStatus(){
    if(username=="admin" && password==1234){
        console.log("login succesfully")
    }else{
        console.log("login failed")
    }
}
loginStatus()