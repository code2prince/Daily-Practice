// Reverse word into string



#include <bits/stdc++.h>
using namespace std;
int main() {
   string s="Hello how are you";
   cout<<s;
   cout<<endl;
   int n=s.size();
   int l=0;
   int r=0;
   while(l<n){
       while(r<n && s[r]!=' '){
           r++;
       }
       reverse(s.begin()+l, s.begin()+r);
       l=r+1;
       r=l;
   }
   cout<<s;

}
// Hello how are you
// olleH woh era uoy