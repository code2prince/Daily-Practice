/// Scope chain


let a="hello \n";

function first(){
    let b="How are You \n";
    second();

    function second(){
        let c="I am fine";
        console.log(a+b+c);
    }
}
first();



/*
hello 
How are You 
I am fine
*/