// 7. Write a function that simulates a traffic light system. 
// The function should take the current light color (red, yellow, green) as 
// input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"



#include <stdio.h>
#include <string.h>
void trafficLight(char*light){
    if(strcmp(light,"red")==0){
        printf("Stop");
    }
    else if(strcmp(light,"yellow")==0){
        printf("slow down");
    }else if(strcmp(light,"green")==0){
        printf("Go");
    }
}
int main() {
    char light[]="yellow";
    trafficLight(light);
}