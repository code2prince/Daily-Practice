//-------- Palindrome Digit ----------by Recrsion

#include<iostream>
using namespace std;
int getReverse(int n, int rev){
    if(n==0){
        return rev;
    }
    int rem=n%10;
    rev= rev*10 + rem;
    n=n/10;
    return getReverse(n, rev);
}
int main(){
    int n=123;
    int rev=0;
    int temp= getReverse( n,  rev);
    
    if(temp==n){
        cout<<"Palindrome";
    }else{
        cout<<"not Palindrome";
    }

}


/*    --------Normally---------
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

*/