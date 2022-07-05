 // Bubble sort

 var arr=[-4,5,3,-9,33,1,0,-2,8];

 function bubbleSort(arr){
    for( i=0; i<arr.length; i++){
        for( j=0; j<arr.length; j++){
            if(arr[j] > arr[j+1] ){
                // swap
                var temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    console.log(arr);
 }
 bubbleSort(arr);