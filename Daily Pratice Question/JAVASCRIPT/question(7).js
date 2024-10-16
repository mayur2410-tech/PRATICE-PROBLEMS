// 7. Write a function that simulates a traffic light system.
//  The function should take the current light color (red, yellow, green) as
//   input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"

var light="yellow"

function trafficLight(){
    if(light=="red"){
        console.log("stop")
    }
    else if(light=="yellow"){
        console.log("slow down")
    }
    else if(light=="green"){
        console.log("go")
    }
}
trafficLight()
