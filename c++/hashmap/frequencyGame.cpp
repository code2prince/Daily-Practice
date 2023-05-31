//Frequency Game
/*
Given an array A of size N. The elements of the array consist of positive integers. You have to find the largest element with minimum frequency.

Example 1:

Input: 
5
2 2 5 50 1
Output:
50
Explanation :
All elements are having frequency 1 except 2.
50 is the maximum element with minimum frequency.



Example 2:

Input:
4
3 3 5 5
Output:
5
Explanation:
Both 3 and 5 have the same frequency, so 5 should be returned.




//////////////////

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        map<int,int>m;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
         int max=INT_MIN;
         int mini=INT_MAX;
        for(auto itr:m){
            if(itr.second<=mini ){
                mini=itr.second;
                max=itr.first;
            }
        }
        return max;
    }
};

///////////////////////////////

*/


#include <bits/stdc++.h>
using namespace std;
int main() {
   int arr[]={2,4,50,50,1,47,1};
   int n=7;
   
   map<int,int>m;
   for(int i=0;i<n; i++){
       m[arr[i]]++;
   }
   int maxx=INT_MIN;
   int minn=INT_MAX;
   for(auto itr:m){
    cout<<itr.first<<"-> "<<itr.second<<endl;
      
       if(itr.second<=minn and itr.first>=maxx){
           minn=itr.second;
           maxx=itr.first;
       }
   }
    cout<<"Largest Element with Low frequency: "<< maxx;

    return 0;
}

/*
1-> 2
2-> 1
4-> 1
47-> 1
50-> 2
Largest Element with Low frequency: 47
*/