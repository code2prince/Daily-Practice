// Twice counter
/*
Given a list of N words. Count the number of words that appear exactly twice in the list.

Example 1:

Input:
N = 3
list = {Geeks, For, Geeks}
Output: 1
Explanation: 'Geeks' is the only word that 
appears twice.



Example 2:

Input:
N = 8
list = {Tom, Jerry, Thomas, Tom, Jerry, 
Courage, Tom, Courage}
Output: 2
Explanation: 'Jerry' and 'Courage' are the 
only words that appears twice.   >>> Tom appear 3 times so ignore it
*/



/*

class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
           int count=0;
           unordered_map<string,int>m;
           for(int i=0; i<n; i++){
               m[list[i]]++;
           }
           for(auto it:m){
              if(it.second ==2)
              count++;
           }
           return count;
           
        }

};


*/