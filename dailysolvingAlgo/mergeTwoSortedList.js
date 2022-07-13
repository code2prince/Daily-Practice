var list1=[1,2,4];
var list2=[1,3,4];
function mergeTwoSortedLists(list1,list2){
    let current= list1.concat(list2);
    // current.sort();   (inbuilt sort function in js)

    // bubble sort
    for(i=0;i<current.length;i++){
        for(j=0;j<current.length;j++){
            if(current[j]>current[j+1]){
                temp=current[j];
                current[j]=current[j+1];
                current[j+1]=temp;
            }
        }
    }
    console.log(current);
    
}
mergeTwoSortedLists(list1,list2)
