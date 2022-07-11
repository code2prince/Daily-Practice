// find min and max element into a array

var array=[88,-99,-112,444,378,96,97,98,100];
//bubble sort
function minMaxElement(){
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
    console.log("min element:",array[0]);
    console.log("max element:", array[array.indexOf(444)]);
}
minMaxElement();