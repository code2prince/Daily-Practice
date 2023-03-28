// change to lower case

#include<iostream>
using namespace std;
int main() {
    string str="PrinceSharma";
    int n=str.length();
    
    for(int i=0; i<n; i++){
        putchar(tolower(str[i]));
    }

    return 0;
}

// princesharma