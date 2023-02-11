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


// or
 /*
  bool isValid(string x)
  {
     stack<char>st;
        for(auto c:x){
            if(st.empty())
            st.push(c);
           else if((st.top()=='(' && c==')') || (st.top()=='{' && c=='}') || (st.top()=='[' && c==']')){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        if(st.size()==0)
            return true;
        else
        return false;
    }
 */


int main() {
    string str="{[()]}";
    
    if(isValid(str)){
        cout<<"Valid";
    }else{
        cout<<"Invalid";
    }
    return 0;
}




//******** without stack   **************************

//>>>>>>>>>not suitable for all test cases

/*
#include <bits/stdc++.h>
//#include <string>
using namespace std;

bool isValidParenthesis( string str) {
  int b1 = 0, b2=0, b3=0;
  for (char c : str) {

    if(c=='(')b1++;
    if(c=='[')b2++;
    
    if(c==')')b1--;
    if(c==']')b2--;
    
    if(c=='{')b3++;
    if(c=='}')b3--;
    
    if (b1 < 0 || b2<0 || b3<0) return false;
  }
  return b1 == 0;
  return b2==0;
  return b3==0;
  
}

int main() {
  string str = "[({})[]()]";
  if (isValidParenthesis(str)) {
    cout << "Valid Parenthesis" << endl;
  } else {
    cout << "Invalid Parenthesis" << endl;
  }
  return 0;
}

*/