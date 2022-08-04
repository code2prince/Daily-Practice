#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int prod=1;
    int digit;
    cout<<"Enter the no:";
    cin>>n;
    while(n>0){
        digit=n%10;
        if(digit%2==0)
            sum=sum+digit;
        else
            prod=prod*digit;
        n=n/10;
    }
    cout<<"sum of even:"<<sum<<endl;
    cout<<"product:"<<prod<<endl;
    return 0;
}