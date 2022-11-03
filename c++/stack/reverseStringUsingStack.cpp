// reverse a string using stack

#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="Prince";
    stack<char> s;

    for(int i=0; i<str.length(); i++){
        char ch=str[i];
        s.push(ch);
    }
    string ans="";
    
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s="prince";
//     stack<char> st;
//     for(int i=0; i<s.length(); i++){
//         char ch=s[i];
//         st.push(ch);
//     }
    
//     while(!st.empty()){
//         cout<<st.top();
//         st.pop();
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s="prince";
//     stack<char> st;
//     for(char x:s){
//         st.push(x);
//     }
//     while(!st.empty()){
//         cout<<st.top();
//         st.pop();
//     }

//     return 0;
// }