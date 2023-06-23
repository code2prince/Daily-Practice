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
       return newArr.concat(quickSort(leftArr), pivot, quickSort(rightArr));                //returned untill sorting occurs
    }
 }
 var Array = [9, 0, 2, 7, -2, 6, 1 ];
 var sortedArray = quickSort(Array);
 console.log(sortedArray);
