//  [1,2,3,4,5]    k=3 (reverse first 3 value)
//  [3,2,1,4,5]



// // Function to reverse first k elements of a queue.
// queue<int> modifyQueue(queue<int> q, int k) {
   
//    stack<int> s;
//    //step 1: pop first kth element from Queue and push into stack
//    for(int i=0; i<k; i++){
//        int val=q.front();
//        q.pop();
//        s.push(val);
//    }
//    //step:2 fetch from stack and push into queue
   
//    while(!s.empty()){
//        int val=s.top();
//        s.pop();
//        q.push(val);
//    }
//    //step 3 fetch first(n-k) element from queue and push back
   
//    int n=q.size();
//    int t=n-k;
//    while(t--){
//        int val=q.front();
//        q.pop();
//        q.push(val);
//    }
//    return q;
// }