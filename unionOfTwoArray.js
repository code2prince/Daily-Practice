// spread opearator

function union(arr1, arr2) {
    const arr3 = [ ...new Set([...arr1, ...arr2])]
    
    
    return arr3
  }
  
  console.log(union(['orange', 'green', 'blue'], ['yellow', 'white', 'blue']));

// concate 

const arr1=[1,2,3,2,34,35];
const arr2=[2,4,0,6,55,99];
function unionOfTwoArray(arr1,arr2){
    const arr3=arr1.concat(arr2);
    let array=new Set(arr3);
   // let array=[...new Set(arr3)];
    console.log(array);
    

}

unionOfTwoArray(arr1,arr2);

// for each

const arr3=arr1.concat(arr2);
function union(arr3){
   
    var union=[];
    arr3.forEach(x=>{
        if(!union.includes(x))
        {
            union.push(x);
        }
    });
    //return union;
    console.log(union);
    
}
union(arr3);


