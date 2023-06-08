// function statement *******************

function a(){
    console.log("a is called");
}
a();
  // a is called


// function Expression *******************

var b= function (){
    console.log("b is called");
}
b();
  //b is called


var c=function (param1){
    return function xyz(){

    }
}
console.log(c());   // [Function: xyz]



//   b();
// var b= function (){
//     console.log("b is called");   // //TypeError: b is not a function
// }

  // note * It will show error into Hosting



// Anonymous Function ********  >>> Function having no name called anonymous function

  //   function(){

  //   }

  //>>>>Syntax Error  Function statements require a function name




// Note**
// First class Function >> Ability to be used like values
//>>also known as First Class Citizens .......

