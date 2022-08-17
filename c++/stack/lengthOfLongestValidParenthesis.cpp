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
            