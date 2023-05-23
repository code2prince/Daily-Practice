//strongly datatype in cpp
#include <bits/stdc++.h>
using namespace std;
string apiCall(){
    return "some data are coming from web";
}

int main() {
    auto response=apiCall();
    cout<<"api calling  : "<<response<<endl;
    
    
    if(typeid(response)==typeid(string)){
        puts("Both ids matches");
    }
    
 

    return 0;
}

/*
api calling  : some data are coming from web
Both ids matches
*/