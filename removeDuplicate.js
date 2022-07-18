let arr=[2,4,3,2,1,2,3,2,1,4,32,1];


//1. filter Method()

function romoveDuplicate(arr){
    return arr.filter((item,index)=> arr.indexOf(item)===index);
}
console.log(romoveDuplicate(arr))  // [ 2, 4, 3, 1, 32 ]


//2, forEach method

function remove(arr){
    var unique=[];
    arr.forEach(element=>{
        if(!unique.includes(element)){
            unique.push(element);
        }
    });
    return unique;
}
console.log(remove(arr));   // [ 2, 4, 3, 1, 32 ]



// javascript Set() Method

// let array=new Set(arr);   // Set(5) { 2, 4, 3, 1, 32 }
//or            
let array=[...new Set(arr)];    //[ 2, 4, 3, 1, 32 ]
console.log(array)