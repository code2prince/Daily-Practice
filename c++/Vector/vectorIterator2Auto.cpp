// Vector Iterator in short using STL 
// C++ 11.0 or above version


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={3,4,2,5,6,7};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";  // 3 4 2 5 6 7 
    }
    cout<<endl;

        // // old method
    // vector<int>:: iterator it;

    // for(it= v.begin(); it!=v.end(); it++){
    //     cout<<(*it)<<" ";   // 3 4 2 5 6 7 
    // }


// new method (auto) >> here into value its coming copies not actual value
for(auto it=v.begin(); it!=v.end(); it++){
    cout<<(*it)<<" ";
}

    cout<<endl;


    
    for(int value : v){
        cout<<value << " ";   // 3 4 2 5 6 7 
    }
    cout<<endl;  


    // &vector (& reference) now actual value will come
    for(int &value : v){
        value++;
        cout<<value << " ";  // 4 5 3 6 7 8
    }
    cout<<endl;

    // for pair 
    vector<pair<int,int>> vPair={{1,2}, {3,4}};

    //for(pair<int,int> & value :vPair)
    

    // new method (auto)
    for(auto &value : vPair){
        cout<<value.first<<" " << value.second<<endl;
        // 1 2
        // 3 4
    }
    return 0;
}
