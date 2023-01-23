// Check given string is isogram or not

/*
Given a string S of lowercase alphabets, check if it is isogram or not. An Isogram is a string in which no letter occurs more than once.

Example 1:

Input:
S = machine
Output: 1
Explanation: machine is an isogram
as no letter has appeared twice. Hence
we print 1.



Example 2:

Input:
S = geeks
Output: 0
Explanation: geeks is not an isogram
as 'e' appears twice. Hence we print 0.

*/



/*
class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        // unordered_map<char,int>m;
        // for(int i; i<s.length(); i++){
        //     m[s[i]]++;
        // }
        // for(int i=0; i<m.size(); i++){
        //     if(m[s[i]]>1)
        //     return false;
        // }
        // return true;


//**********************************************
         unordered_map<char,int>m;
        for(int i; i<s.length(); i++){
            m[s[i]]++;
        }
        for(auto it=m.begin(); it!=m.end(); it++){
            if(it->second >1)
            return 0;
        }
        return 1;
//****************************************************************
        

        // 2nd approach ************
        sort(s.begin(), s.end());
        for(int i=0; i<s.length(); i++){
            if(s[i]==s[i+1]){
                return false;
            }
        }
        return true;
    }
};

*/