// IIFE >> Imediate Invoked Function Expression
//++++++++++++++++++++++++++++++++++++++++++++++++++++

// A function we want to call imediate    >> ex. database connection on page reload
// or 
//IIFE is a JavaScript function that runs as soon as it is defined. 



// normal function
// function connection(){
//     console.log('data base Connected')
// }
// connection()




//IIFE   **************************************************************

//  named IIFE  because Connection is given as function name
(function connection(){
    console.log('Data Base Connected..');
})();

// data base conected..

// (function)();  >> IIFE >>invoke imediately 




// we can also used in Arrow Function ++++++++++++++++++++++++++++++++++

(()=>{
    console.log("data base conected.....")
})();

// data base conected.....





// unNamed IIFE

((name)=>{
    console.log(`hello ${name}`)
})("Prince");


// hello Prince