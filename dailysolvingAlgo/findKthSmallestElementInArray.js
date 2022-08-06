const array=[1,21,4,3,2,4];
function kthElement(array){
    let k=3;
   for( i=0; i<array.length; i++){
    
    for( j=0; j<array.length; j++) {
        if(array[j] > array[j+1]){
            //swap
            let temp= array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }
   }
   console.log(array);
    console.log("Kth Smallest no of array:",array[k-1]);
}
kthElement(array);

// [ 1, 2, 3, 4, 4, 21 ]

// Kth Smallest no of array: 3