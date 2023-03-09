// Reverse string 
#include<iostream>
using namespace std;
void rev(string &str){
    int n=str.length();
    for(int i=0; i<n/2; i++){
        swap(str[i], str[n-i-1]);
    }
}
int main(){
    string str="Prince";
    rev(str);
    cout<<"After reverse: "<<str;
}

// After reverse: ecnirP





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


// #include<iostream>
// using namespace std;
// int main(){
//     string str=" Prince";
//     for(int i=str.length()-1; i>=0; i--){
//         cout<<str[i];
//     }
//     return 0;
// }



 /// ecnirP








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