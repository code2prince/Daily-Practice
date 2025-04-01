// Reverse word into string



#include <bits/stdc++.h>
using namespace std;
int main() {
   string str="Hello how are you";
   int n=str.length();
   stack<string>st;

   for(int i=0; i<n; i++){
    string word="";
    while(i<n && str[i]!=' '){
        word+=str[i];
        i++;
    }
    st.push(word);
   }

   while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
   }
}
// Hello how are you
// you are how Hello 