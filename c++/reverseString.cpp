// #include<iostream>
// using namespace std;
// int main(){
//     string str="Prince";
//     string rev="";

//     for(int i=str.length()-1; i>=0; i--){
//         rev=rev+str[i];
//     }
//     cout<<rev;
//     return 0;
// }

// or 
#include<iostream>
using namespace std;
int main(){
    string str=" Prince";
    for(int i=str.length()-1; i>=0; i--){
        cout<<str[i];
    }
    return 0;
}



 /// ecnirP





// recursion 


// #include <iostream>
// using namespace std;

// void reverse(string str){
//     for(int i=str.length()-1; i>=0; i--){
//         cout<< str[i];
//     }
// }

// int main() {
//     string str="pricne";
    
//     reverse(str);

//     return 0;
// }




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