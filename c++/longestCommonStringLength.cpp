// longest common string length




#include <iostream>
using namespace std;
int main() {
    string str1="Prince sharma";
    string str2="hello Prince";
    
    int ans=0;
    for(int i=0; i<str1.length(); i++){
        for(int j=0; j<str2.length(); j++){
            int k=0;
            while(  (str1[i+k]==str2[j+k]))        ///  while((i+k < str1.length()) && (j+k < str2.length()) && str1[i+k]==str2[j+k])
            k++;
            ans=max(ans,k);
        }
    }
    cout<<"longest common string length: "<< ans<<endl;
    return 0;
}


//longest common string length: 6