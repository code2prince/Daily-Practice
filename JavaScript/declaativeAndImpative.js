//Delarative style programming &&  Imprative style programming


//Note**>>>> React works on Delarative style programming its not support Imprative style



// Imprative (react not support for loop into JSX beacuse it raturns Object)

const a1=[1,2,3,4];
const a2=[];
for(let i=0; i<a1.length; i++){
    a2[i]=a1[i]*2;
}
console.log(a2);

// [ 2, 4, 6, 8 ]


//Delarative style programming  (React support)

const arr=[1,3,4];
let ans=[];

ans=arr.map(function(x){
    return x*2;
});
console.log(ans);

// [ 2, 6, 8 ]


