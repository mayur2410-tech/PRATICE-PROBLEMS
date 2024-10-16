console.log("choose an option:")
console.log("1.Check even or odd :")
console.log("2.Exit :")
let choice=prompt("Enter a choice 1 or 2 :")
let result;

switch(choice){
    case '1':
        let num=parseInt(prompt("enter a no"))
        if(num%2==0){
            result="even no"
        }else{
            result="odd no"
        }
        break;
        
        case '2' :
            result="Exiting a program";
            break;
            default :
            result="Enetr valid choice"
}

console.log(result)