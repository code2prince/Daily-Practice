// Merge Sort

var array=[5,6,3,1,7,4,0];

function merge(l,r){
    let arr=[];
    while(l.length && r.length){
        if(l[0] < r[0]){
            arr.push(l.shift())    //shift() is used for remove element from starting of array
        }
        else{
            arr.push(r.shift())
        }
    }
    return[...arr, ...l, ...r]   // spread used to add like concat
   
}
function mergeSort(array){
    const middleIndex=array.length/2;
    if(array.length<2){
        return array;
    }
    const l=array.splice(0,middleIndex);
    return merge(mergeSort(l),mergeSort(array))
}

console.log(mergeSort(array));







// function mergeSort(left,right){
//     var i=0;
//     var j=0;
//     var result=[];
//     while(i<left.length || j<right.length){
//         if(i===left.length){
//             result.push(right[j]);
//             j++;
//         }
//         else if(j===right.length || left[i]<=right[i])
//         {
//             result.push(left[i]);
//             i++;
//         }
//         else{
//             result.push(right[j]);
//             j++;
//         }
//     }
//     return result;
// }
// console.log(mergeSort([2,5,3,9],[-9,8,-4,1]));