#include<bits/stdc++.h>
using namespace std;
int findMaxLength(string str){
    int n= str.length();
    stack<int>s;
    s.push(-1);
    int result=0;
    for(int i=0; i<n; i++){
        if(str[i] =='(')
            s.push(i);
        else
            {
                if(!s.empty())
                {
                    s.pop();
                    result=max(result, i-s.top());
                }
                else
                    s.push(i);
            }
    }
    return result;
}
int main(){
    string str="(()())(";
    cout<<"length of longest valid parenthesis:"<<findMaxLength(str)<<endl;
    return 0;
}
/// output

 // length of longest valid parenthesis: 6               





/*   GEEKS PROBLEM
 Given a string S consisting of opening and closing parenthesis '(' and ')'. Find length of the longest valid parenthesis substring.

A parenthesis string is valid if:

For every opening parenthesis, there is a closing parenthesis.
Opening parenthesis must be closed in the correct order.


Example 1:

Input: S = ((()
Output: 2
Explaination: The longest valid 
parenthesis substring is "()".
*/





/*
class Solution{
public:
    int maxLength(string S){
        // code here
        vector<int> stack = {-1};
        int ans = 0;
        for (int i = 0; i < S.size(); i++)
            if (S[i] == '(') stack.push_back(i);
            else if (stack.size() == 1) stack[0] = i;
            else {
                stack.pop_back();
                ans = max(ans, i - stack.back());
            }
        return ans;
    }
    
};

*/