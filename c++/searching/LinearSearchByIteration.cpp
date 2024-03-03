//-----------------------Search Element ----------------

#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,7,6,3,2,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int find;
    cout<<"Enter Element to Find:";
    cin>>find;

   int ans=0;
    for(int i=0; i<n; i++){
        if(find==arr[i]){
            ans++;
        }
    }
    //cout<<ans;
    if(ans==0){
        cout<<"Not Present";
    }else{
        cout<<"Present";
    }

}


// Enter Element to Find:10
// Not Present


// Enter Element to Find:6
// Present