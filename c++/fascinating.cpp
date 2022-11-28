// Fascinating no
// 192 >> 192*2 + 192*3 + (192*2+192*3)= 192384576  all are present (1-9)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no: ";
    cin>>n;

    string num="123456789";
    int n1= n*2;
    int n2= n*3;
    string ans=to_string(n) + to_string(n1) + to_string(n2);

    sort(ans.begin(), ans.end());
    if(ans.compare(num)==0)
    cout<<"Fascination no";
    else
    cout<<" not";
    return 0;
}

// Enter no: 192
// Fascination no

// Enter no: 123
//  not