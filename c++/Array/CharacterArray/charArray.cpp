// char array
#include <iostream>
using namespace std;
int main() {
    char name[20];
    cout<<"enter name: ";
    cin>>name;
    cout<<endl;
    cout<<"your name is :";
    cout<<name;
    
    /*
    enter name: prince
    your name is :prince
*/
// find size
    int n=0;
   for(int i=0; name[i]!='\0';i++){
       n++;
   }
   cout<<endl;
   cout<<"size: "<<n;   //size: 6
   cout<<endl;
   
   // reverse char array
  int s=0;
  int e=n-1;
  while(s<e){
      swap(name[s++], name[e--]);
  }
  cout<<"after rev: "<<name;   //after rev: ecnirp
   cout<<endl;
}