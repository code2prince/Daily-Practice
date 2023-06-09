//Function Curring >> Binding 

let multiply = function(x,y){
    console.log(x*y);
}
let multiplyBy2=multiply.bind(this,2);
multiplyBy2(7);  //14

// or 
multiplyBy2(5,6);// 10  It will go through 1st value only

let multipleBy3=multiply.bind(this,3);
multipleBy3(9);  //27