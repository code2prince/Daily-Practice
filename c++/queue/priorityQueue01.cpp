// --------------Priority Queue ------------------------
/*
A standard queue follows a First-In, First-Out (FIFO) principle, 
while a priority queue allows elements to be processed based on their assigned priority, not their order of arrival
*/

// It can also uses for sorting O(NlogN) but not better than Quick or Merge Sort
// By default uses Max Heap but we can make it in Min Heap by using  --> priority_queue<int ,vector<int>, greater<int>> newPQ; 

#include<bits/stdc++.h>
using namespace std;
 int main (){
    int arr[]={4,5,6,8,6,2,3,4,1,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int>pq;
    priority_queue<int ,vector<int>, greater<int>> newPQ;   //---Min Heap--> it will provide data in sorted and ascending order
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
    while(!pq.empty()){
    cout<< pq.top()<<" ";   //9 8 6 6 5 4 4 3 2 1 0   By Deafult it follow max heap
    pq.pop();
    }

    //--------------for Min Heap---------------------
    cout<<"Min heap"<<endl;
    for(int i=0; i<n; i++){
        newPQ.push(arr[i]);
    }
    while(!newPQ.empty()){
        cout<<newPQ.top()<<" ";  //0 1 2 3 4 4 5 6 6 8 9
        newPQ.pop();
    }
}