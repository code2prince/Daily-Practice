// balanced parenthesis

#include <bits/stdc++.h>
using namespace std;

bool isValid(string str){
    int n=str.size();
    
    stack <char> st;
    bool ans=true;
    
    for(int i=0; i<n; i++){
        if(str[i]=='{'  || str[i]=='(' || str[i]=='['){
            st.push(str[i]);
        }
        else if(str[i]== ')'){
            if(!st.empty() && st.top() == '('){
                st.pop();
            }else{
                ans=false;
                break;
            }
        }
        
        else if(str[i]== '}'){
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }else{
                ans=false;
                break;
            }
        }
        
        else if(str[i]== ']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }else{
                ans=false;
                break;
            }
        }
    }
    
    if(! st.empty()){
        return false;
    }
    return ans;
}



int main() {
    string str="{[()]}";
    
    if(isValid(str)){
        cout<<"Valid";
    }else{
        cout<<"Invalid";
    }
    return 0;
}