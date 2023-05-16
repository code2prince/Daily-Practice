// Spread operator


// for Array
const a=[1,2,3,4,5];
const b=[3,4,5,6,7,];

console.log(...a,...b);

// 1 2 3 4 5 3 4 5 6 7


// for Objects

const user1={
    name:"Prince",
    age:21,
    mobile:8873091666
}

const user2={
    email:"code2prince@gmail.com",
    age:20,
    address: "Chennai"
}

const result={...user1, ...user2};
console.log(result);

// or  >> console.log({...user1,...user2});


/*
   // It will override age from 2nd object user2 if duplicates occurs
{
  name: 'Prince',
  age: 20,
  mobile: 8873091666,
  email: 'code2prince@gmail.com',
  address: 'Chennai'
}
*/

