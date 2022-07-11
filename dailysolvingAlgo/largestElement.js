var array=[2,44,3,6,7,8,0];
//bubble sort
function largestElement(){
    for(i=0;i<array.length;i++){
        for(j=0;j<i;j++){
            if(array[j]>array[j+1]){
                //swap
                const temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    console.log(array);
    console.log(array.indexOf(44));
    console.log(array[6]);
    // or
    console.log(array[array.indexOf(44)]);
    
}
largestElement()