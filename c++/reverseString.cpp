#include<iostream>
using namespace std;
int main(){
    string str="Prince";
    string rev="";

    for(int i=str.length()-1; i>=0; i--){
        rev=rev+str[i];
    }
    cout<<rev;
    return 0;
}

 /// ecnirP






    //using reverse() method available in algorithm header file

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str="Prince Sharma";
//     reverse(str.begin(), str.end());
//     cout<<str;
//     return 0;
// }