#include<iostream>
using namespace std;
int main(){
    int n,temp;
    int rev=0;
    cout<<"Enter the no:";
    cin>>n;
    temp=n;
    while(n>0){
        rev=rev*10 + (n%10);
        n=n/10;
    }
    cout<<"reverse:"<<rev<<endl;
    if(temp==rev)
        cout<<"palindrome";
    
    else
        cout<<"not palindrome";
    
    return 0;
}




