// Method 1
function reverseString(string){
    let newString="";
    for(i=string.length-1; i>=0; i--){
        newString+=string[i];
    }
    return newString;
}
console.log(reverseString("Hello"));




// method 2     (In build function for javascript)

/*
function reverse(string){
    let a= string.split("");
    let b=a.reverse();
    let c=b.join("");
    return c;
}
console.log(reverse("prince"));
*/


// (chaining method for above)


/*
function reverseString(string){
    return string.split('').reverse().join('');
}
console.log(reverseString("hello"))
*/



