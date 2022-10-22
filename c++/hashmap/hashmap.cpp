// hashmap (creation, insertion, searching at O(1) Time-complexity)
#include <iostream>
#include<map>
#include<unordered_map>

using namespace std;
int main() {
    // creation ............
   unordered_map<string,int> m;
   
   // insertion...............
   //method 1
   pair<string, int> p =make_pair("prince",3);
   m.insert(p);
   
   // method 2
   pair<string,int> pair2 ("sharma", 2);
   m.insert(pair2);
   
   //method3
   m["hello"]=1;
   
   m["hello"]=5; // if same key we pass then it will update not insert so hello >>5 will output not hello>>1
   //search .................
   //method 1
   cout<<m["hello"]<<endl;  // 5 
   cout<<m["prince"]<<endl;  //3
   
   //method 2
   cout<< m.at("prince")<<endl;//3
   
   //cout<< m.at("unknownKey")<<endl; //error because no such key available
   cout<< m["unknownKey"]<<endl; // 0 output >> important point >> it will create a new key entry so output is 0 if now we search with m.at() then now both will return 0
   cout<<m.at("unknownKey")<<endl; // 0 
   
   //size
   cout<< m.size()<<endl; // 4  becase of 3 insertion + 1 key auto generated for unknownKey
   
   // to check presence
   cout<<m.count("bro")<<endl; // 0 at  unavailable
   cout<<m.count("sharma")<<endl; // 1 if present 

      
//    //erase
//   m.erase("prince");
//   cout<<m.size()<<endl; // 3 now size 3 prince is deleted
   
   

    return 0;
}