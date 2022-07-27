const s="Prince Sharma";

function lengthOfLastWord(s){
    if(s.length==0){
     console.log(0);
    }

      let word=s.trim().split(' ');

      console.log( word [word.length-1].length);
}
lengthOfLastWord(s)