// Convert an array into reduce form 

/*

Given an array with N distinct elements, convert the given array to a reduced form where all elements are in range from 0 to N-1.
 The order of elements is same, i.e., 0 is placed in place of smallest element, 
 1 is placed for second smallest element, and N-1 is placed for the largest element.

Note: You don't have to return anything. You just have to change the given array.

Example 1:

Input:
N = 3
Arr[] = {10, 40, 20}
Output: 0 2 1
Explanation: 10 is the least element so it
is replaced by 0. 40 is the largest
element so it is replaced by 3-1 = 2. And
20 is the 2nd smallest element so it is
replaced by 1.




Example 2:

Input:
N = 5
Arr[] = {5, 10, 40, 30, 20}
Output: 0 1 4 3 2
Explanation: As 5 is smallest element,
it's replaced by 0. Then 10 is 2nd
smallest element, so it's replaced by 1.
Then 20 is 3rd smallest element, so it's
replaced by 2. And so on.

*/

/*

class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	    map<int,int>m;
	    for(int i=0; i<n; i++){
	        m[arr[i]]=i;
	    }
	    int c=0;
	    for(auto itr=m.begin(); itr!=m.end(); itr++){
	        arr[itr->second]=c++;
	    }
	}

};
*/


#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[3]={10,40,20};
    int n=3;

    map<int,int>m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }

    int c=0;
    for(auto itr=m.begin(); itr!=m.end(); itr++){
        arr[itr->second]=c++;
        
    }

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}