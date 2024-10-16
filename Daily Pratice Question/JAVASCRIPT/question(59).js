let num1=parseFloat(prompt("enter num 1: "));
let num2=parseFloat(prompt("enter num 2: "));
let opreator=prompt("enter opreator(+,-,*,/)");
let result;
switch(opreator){
    case '+':
        result=num1+num2;
        break;
        case '-' :
             result=num1-num2;
        break;
        case '*' :
             result=num1*num2;
        break;
        case '/':
            if(num2==0){
                result="error!divisible by zero"
            }else{
                result=num1/num2;
            }
            break;
            default :
            result="Error!invalid opreator"
}
console.log("the result is :", result);