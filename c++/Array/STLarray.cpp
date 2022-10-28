// stl (standard template library)  into c++ ->> Array
#include <iostream>
#include<array>
using namespace std;
int main() {
    array<int,4> a={1,2,3,4};
    int size= a.size();
    cout<<size;  // 4
    
    for(int i=0; i<size; i++){
        cout<<a[i] << " "; // 1 2 3 4 
    }
    
    cout<<"Element at 2nd index : "<<a.at(2)<<endl;  //Element at 2nd index : 3
    
    cout<<"Empty or not " << a.empty() <<endl; //Empty or not 0(it return boolean true 1 or false 0)

    cout<<"first element:"<<a.front()<<endl; // first element:1

    cout<<"last element: "<<a.back()<<endl; // last element: 4
    return 0;
}