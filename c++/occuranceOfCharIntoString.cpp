// occurance of char into string 

#include <iostream>
using namespace std;
int main() {
    string str="hello prince";
    int count=0;
    for(int i=0; i<str.length(); i++){
        count=0;
        for(int j=0; j<str.length(); j++){
            
            if(j<i && str[i]==str[j]){
                break;
            }
            
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count!=0)
        cout<<str[i] << " is: "<<count<<endl;
    }

    return 0;
}

// h is: 1
// e is: 2
// l is: 2
// o is: 1
//   is: 1
// p is: 1
// r is: 1
// i is: 1
// n is: 1
// c is: 1