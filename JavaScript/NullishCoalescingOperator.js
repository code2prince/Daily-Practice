// Nullish coalescing operator

// It basically print the 1st value in normal cases;
let a = 10 ?? 20;
let aa= 12 ?? 5;
console.log(a); // 10
console.log(aa); //12



// if 1st value contains (null or undefined) then it will go for next value it escap the 1st one
let b= null ?? 20;
console.log(b);  // 20


let c= undefined ?? 50;
console.log(c);  // 50



let d=  undefined ?? null;
console.log(d);  // null

let e= null ?? undefined;
console.log(e);   // undefined



let ee= null ?? undefined ?? 10;
console.log(ee); // 10