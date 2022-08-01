// check two arrays are equal or not

let arr1=[2,4,3,1,5];
let arr2=[5,1,2,4,3];
function areEqual(){
    let m=arr1.length;
    let n=arr2.length;
    if(n!=m)
    return false;
    arr1.sort();
    arr2.sort();
    for(i=0; i<n; i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
            else
                return true;
    }

}
if(areEqual(arr1,arr2))
    console.log("Equal");
    else
        console.log("Not Equal"); 
//areEqual();


