// Unordered set insertion, deletion, find , count methods

#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main() {
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20);  /// duplicate data insertion not allow >> its simply replace 
    
    for(auto it=s.begin() ; it!=s.end(); it++){
        cout<<(*it)<<" ";    // 30 10 20 
    }

    cout<<"size : " <<s.size()<<endl;   // size : 3


    // cout<<s.clear();  >>> it will clear all data


//  find()

    int key=25;
    if(s.find(key)== s.end()){
        cout<<"not found";
    }else{
        cout<<"present";
    }
    // not found


    /*
    int keyy=20;
    if(s.find(keyy)==s.end()){
        cout<<"not present";
    }else{
        cout<<"present";
    }
    // present

    */

       // 2nd method 
   /* >>>>>>>>>>>>
   int keyy=20;
    if(s.find(keyy)!=s.end()){
        cout<<"key found";
    }
    // key found
   */

cout<<endl;

// erase()
   int deleted_key=10;
   s.erase(deleted_key);

   for(auto it=s.begin(); it!=s.end(); it++){
    cout<<(*it)<<" ";     //  30 20
   }
cout<<endl;

// count()
   if(s.count(20)){    // >>> working model if s.count having 20 then its make it true >>> if(true) then cout present
    cout<<"present";
   }else{
    cout<<"not present";
   }
    


    return 0;
}