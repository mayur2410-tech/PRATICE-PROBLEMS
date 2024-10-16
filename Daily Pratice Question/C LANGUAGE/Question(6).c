// 6. Write a function that checks if a username and 
// password match predefined values. If the username is 
// "admin" and the password is "1234", 
// print "Login successful"; otherwise, print "Login failed.

#include <stdio.h>
#include <string.h>

void loginStatus(char *username,int password){
    if(strcmp(username,"admin")==0&& password==1234){
        printf("Login Succesfully");
    }else
    printf("login failed");
}



int main() {
    char username[]="admin";
    int password=1234;
  loginStatus(username,password);
   
}