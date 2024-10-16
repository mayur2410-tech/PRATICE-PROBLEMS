// 1. Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F

let marks=prompt("enter your marks;  ");
if(90<=marks && marks<=100){
     console.log("Grade A");
  }else if(80<=marks && marks<=89){
       console.log("Grade B");
  }else if(70<=marks && marks<=79){
       console.log("Grade C");
  }else if(60<=marks && marks<=69){
       console.log("Grade D");
  }else if(60>=marks){
       console.log("Grade F ");
  }