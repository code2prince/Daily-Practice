// Vector  >> Iterator

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,4,5,7};
    for(int i=0; i<v.size(); i++){
        cout<<v[i] <<" ";     // 2 3 4 5 7
    }
    cout<<endl;
    vector<int> :: iterator it=v.begin();
    cout<<(*it)<<endl;   // 2
    cout<<(*it+1)<<endl;  // 3

    for(it=v.begin(); it!=v.end(); it++){
        cout<< (*it) <<" ";   // 2 3 4 5 7
    }
    cout<<endl;
    vector<pair<int,int>>vPair={{1,2},{2,3},{4,3}};
    vector<pair<int,int>> :: iterator itr;
    for(itr=vPair.begin(); itr!=vPair.end(); itr++){
        cout<<(*itr).first<<" " << (*itr).second<<endl;
        // 1 2
        // 2 3
        // 4 3
    }
    
    // 2nd method 
    for(itr=vPair.begin(); itr!=vPair.end(); itr++){
        cout<< (itr->first )<<" " <<(itr->second) <<endl;
    }


    return 0;
}

