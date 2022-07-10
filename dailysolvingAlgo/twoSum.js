
const num=[2,7,11,23];
function twoSum(num,target){
    let map=new Map();
    for(i=0;i<num.length;i++){
        let num1=num[i];
        let num2=target-num1;
        if(map.has(num2)){   //has() returns a boolean indicating
            return[i,map.get(num2)];  
        }
        map.set(num1,i);
    }
};
console.log(twoSum(num,9));
