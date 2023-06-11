// Hoisting  >> In JavaScript, a variable can be declared after it has been used.

             // >>   In other words; a variable can be used before it has been declared.

// function name(){
//     console.log("Hello prince");
// }
// name();





// it will also work  

name();
function name(){
    console.log("Hello prince");  // Hello prince
}

//Note=>  But if we write function as a Arrow Function then It wll not work  here name2 behaves like a variable so it will not work

name2();
const name2=()=>{
    console.log("hello arrow function");  // Error
}




// const name2=()=>{
//     console.log("hello arrow function");  // hello arrow function
// }
// name2();

console.log(a);  // undefined
var a=5; 

//Note*-> when we uses ( let & const ) then it will show error

// console.log(b);   // Error
// const b=6;


// console.log(c);  //Error
// const c=6;


sum(4,5); // Here 4 & 5 are is argument
function sum(x,y){  //Here x &  y are parameter 
    console.log(x+y);   // 9
}