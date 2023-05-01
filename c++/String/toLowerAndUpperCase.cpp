// string to upper and lower case
#include <bits/stdc++.h>
using namespace std;
int main() {
   string s="Prince Kumar SHarMa";
   int n=s.size();
   
   transform(s.begin(), s.end(), s.begin(),::toupper); // PRINCE KUMAR SHARMA

   cout<<s<<endl;
   
    transform(s.begin(), s.end(), s.begin(),::tolower);  // prince kumar sharma
    cout<<s;

    return 0;
}