// 3. Write a function that takes three sides of a triangle 
// and checks whether the triangle is equilateral, isosceles, or scalene.


let side1=prompt("\nEnter side one:");
  
  let  side2=prompt(" \nEnter side two: ");
 
  
  let  side3=prompt(" \nEnter side three: ");
  
  if(side1==side2 &&side2==side3){
     console.log("Triangle is Equilateral");
  }else if(side1==side2 || side2==side3 || side1==side3){
     console.log("triangle is isoseclen"); 
  }else if(side1!=side2 && side2!=side3){
     console.log("Triangle is Scalene");
  }