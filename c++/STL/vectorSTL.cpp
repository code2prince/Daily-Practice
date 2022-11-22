// stl (standard template library)  into c++ ->> vector
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    cout<<"capacity: " << v.capacity()<<endl; // capacity: 0
    
    v.push_back(1); // push_back is used for add element into vector
    cout<<"capacity: " << v.capacity()<<endl; // capacity: 1
    
    
    // //capacity will double if vector full 
    v.push_back(2);
    cout<<"capacity: " << v.capacity()<<endl; // capacity: 2
    
    ////capacity will double if vector full 
     v.push_back(3);
    cout<<"capacity: " << v.capacity()<<endl; // capacity: 4
    
    cout<<"size: "<<v.size()<<endl; //size: 3
    
    cout<<"element at 2nd Index:"<<v.at(2)<<endl; // element at 2nd Index:3
    
    cout<<"front "<<v.front()<<endl; //front 1
    cout<<"back "<< v.back()<<endl; // back 3
    
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" "; 
    }cout<<endl;
    //// before pop 1 2 3
    
    v.pop_back(); 
    cout<< "after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    // after pop 1 2 
    
    // v.clear()  >>clear operation will clear  all vector note-> here size become 0 not capacity
    
    
    
    
    vector<int> a(5,1); //vector intialization of size 5 and initialize all value with 1 , if we not put values here then intitalize with 0
    
    cout<<"print a:"<<endl;
    for(int i:a){
        cout<<i<< " ";
    }
    
    // print a:
    // 1 1 1 1 1 
    
    
    
    
    return 0;
}