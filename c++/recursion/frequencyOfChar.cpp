//freq of char

#include <iostream>
using namespace std;
int freq(string str, char k){
    int count=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]==k){
            count++;
        }
    }
    return count;
}
int main() {
   string str="prince sharma";
   char k='a';
   
   cout<<"frequncy of " << k <<" is: " <<freq(str, k);

    return 0;
}

//frequncy of a is: 2
