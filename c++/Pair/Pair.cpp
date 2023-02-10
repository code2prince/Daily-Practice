#include<bits/stdc++.h>

using namespace std;
int main(){


    pair<int,string>p(294,"Prince Sharma ");
    cout<<p.first<<" "<<p.second<<endl;  // 294 Prince Sharma 

    cout<<p.second<<" "<<p.first<<endl;  // Prince Sharma  294
    

    pair<char, int>p2('P', 3);
    cout<<p2.first<<" "<<p2.second;  // P 3
    
    return 0;
}