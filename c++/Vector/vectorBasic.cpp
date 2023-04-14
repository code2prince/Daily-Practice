#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    int size=v.size();
   // cout<< size;  //3
    for(int i=0 ;i<size; i++){
        cout<<v[i]<<" ";   // 1 2 3
    } 
    cout<<endl;


    // 2nd Method >>Iterator
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout<< *it<<" ";   // 1 2 3   >> *it because iterator is a pointer
    }
    cout<<endl;



    //3rd Approach by Using Auto keyword
    for(auto element:v){   // auto keyword will deside which data type according to initialization
        cout<<element<<" ";  // 1 2 3
    }
    cout<<endl;


//2 method to create vector
    vector<int>v2 (3,50);   // (size,element)
    // 50 50 50 
    swap(v,v2);
    for(auto element:v){   
        cout<<element<<" ";    //v>>> 50 50 50 
    }
    for(auto element:v2){   
        cout<<element<<" ";   // v2>>  1 2 3 
    }

   // sort(v.begin(), v.end());


}