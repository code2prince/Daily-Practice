// Prime Factor

/*
Given a number N. Find its unique prime factors in increasing order.
 

Example 1:

Input: N = 100
Output: 2 5
Explanation: 2 and 5 are the unique prime
factors of 100.



Example 2:

Input: N = 35
Output: 5 7
Explanation: 5 and 7 are the unique prime
factors of 35.
*/


#include <bits/stdc++.h>
using namespace std;
  bool isPrime(int n){
       if(n<2){
           return false;
       }
       for(int i=2; i<=n/2; i++){
           if(n%i==0){
               return false;
               return 0;
           }
       }
       return true;
   }
int main() {
   int n;
   cout<<"enter n: ";
   cin>>n;
   
 
   vector<int>v;
   for(int i=0; i<n; i++){
       if(isPrime(i) && n%i==0){
           v.push_back(i);
       }
   }
   for(int i=0; i<v.size(); i++){
       cout<<v[i]<<" ";
   }
    return 0;
}

/*
enter n: 35
5 7 

enter n: 100
2 5 
*/