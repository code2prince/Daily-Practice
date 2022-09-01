// frequency of  char in string 

#include<iostream>
using namespace std;
int main(){
    string str= "I am Prince Kumar Sharma";

       // user input

    // string str;
    // cout<<"enter string:";
    // cin>>str;

    char check = 'm';
    int count=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]== check){
            count++;
        }
    }
    cout<<"Frequency of character "<< check<<" into string :" <<count;
    return 0;
}

// Frequency of character m into string :3