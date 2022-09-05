// factor of a given no

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        if(n%i==0)
        cout<< i <<" ";

    }
    return 0;
}



// Enter a no:60
// 1 2 3 4 5 6 10 12 15 20 30 60 