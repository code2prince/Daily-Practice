// Quick sort


function quickSort(arr) {
    if (arr.length <= 1) {
       return arr;
       } else {
             var leftArr = [];              
             var rightArr = [];
             var newArr = [];
             var pivot = arr.pop();      //  Take a pivot value
             for (var i = 0; i < arr.length; i++) {
                if (arr[i] <= pivot) {    // using pivot value start comparing
                   leftArr.push(arr[i]);      
             } else {
                     rightArr.push(arr[i]);
           }
         }
       return newArr.concat(quickSort(leftArr), pivot, quickSort(rightArr)); // array will be                                                                            //returned untill sorting occurs
    }
 }
 var Array = [9, 0, 2, 7, -2, 6, 1 ];
 
 var sortedArray = quickSort(Array);
 console.log(sortedArray)


// function quickSort(arr){
//     stack=[];
//     stack.push(0);
//     stack.push(arr.length-1);
//     while(stack[stack.length-1]>=0){
//         end=stack.pop();
//         start=stack.pop();
//         pivot=(arr,start,end);
//         if(pivot-1 > start){
//             stack.push(start);
//             stack.push(pivot-1);
//         }
//         if(pivot+1 < end){
//             stack.push(pivot+1);
//             stack.push(end);
//         }
//     }
// }
// var arr=[7,8,4,2,-2,9,0];
// console.log(arr);
// quickSort(arr);