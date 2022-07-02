// write a function to reverse a no along with symbol (-4523= -3254     or  12.67800= 876.21)

function reverseNumber(num){
    return(

        parseFloat((num)   //  convert the no  into a float from a string
            .toString()    //  it will convert the string into a array of character
            .split('')
            .reverse()
            .join('')
          )*Math.sign(num)  // it will multiplies the no with sign   
    ) 
}
console.log(reverseNumber(-65654));
console.log(reverseNumber(-65654.12000));
console.log(reverseNumber(100000000000));

