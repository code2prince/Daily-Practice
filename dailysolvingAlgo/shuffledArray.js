/*
Write a function shuffle(arr)that takes input an array of numbers and returns an array by ordering the 
numbers in following fashion:
a1 <= a2 >= a3 <= a4 >= ....
Please note that there are multiple outputs that are possible for a given array. Your function can return 
one possible output. 
Example: If input is [2, 1, 5, 3, 11, 7], one possible output could be [2, 7, 3, 11, 1, 5]
*/




function shuffle(arr) {
    arr.sort((a, b) => a - b);
    for (let i = 1; i < arr.length - 1; i=i+2) {
        [arr[i], arr[i + 1]] = [arr[i + 1], arr[i]];
    }
    return arr;
}

let arr = [2,1,5,3,11,7];
arr = shuffle(arr);
console.log("Shuffled array:", arr);
// Shuffled array: [ 1, 3, 2, 7, 5, 11 ]