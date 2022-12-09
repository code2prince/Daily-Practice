// check the sum of num and its rev is palindrom of not 


// Example 1:

// Input: n = 23
// Output: 55 
// Explanation: reverse(23) = 32,then 32+23
// = 55 which is a palindrome. 


#include <iostream>
using namespace std;
int main() {
    int n=21;
    int temp=n;
    int rev=0;
    while(n>0){
        rev=rev*10+(n%10);
        n=n/10;
    }
    //cout<<rev;
    
    int sum=temp+rev;
    //cout<<sum<<endl;
    int temp2=sum;
    int reverse=0;
    while(sum>0){
        reverse=reverse*10+(sum%10);
        sum=sum/10;
    }
    cout<<reverse<<endl;
    if(temp2==reverse){
        cout<<"palindrome";
    }else{
        cout<<"not";
    }

    return 0;
}

/*
33
palindrome
*/