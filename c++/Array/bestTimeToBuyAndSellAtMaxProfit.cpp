// Best time to buy and sell stock at max profit

#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,2,1,7,8};
    int n=5;

    int minimum=INT_MAX;
    int maxProfit=0;
    for(int i=0; i<n; i++){
        minimum=min(minimum,arr[i]);
        maxProfit=max(maxProfit, arr[i]-minimum);
    }
    cout<<"max Profit: "<<maxProfit;
    return 0;
}

// max Profit: 7