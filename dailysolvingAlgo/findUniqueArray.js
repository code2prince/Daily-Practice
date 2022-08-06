var array=[1,5,1,4,7,4,7];
function findUnique(array){
    var unique=0;
    for(i=0; i<=array.length; i++){
        unique=unique^array[i];
    }
    console.log("ans",unique);
}
findUnique(array);