// palindrome no

#include<iostream>
using namespace std;
int main(){
    int n,temp;
    int rev=0;
    cout<<"Enter the no:";
    cin>>n;
    temp=n;
    while(n>0){
        rev=rev*10 + (n%10);
        n=n/10;
    }
    cout<<"reverse:"<<rev<<endl;
    if(temp==rev)
        cout<<"palindrome";
    
    else
        cout<<"not palindrome";
    
    return 0;
}

// output

// Enter the no:121
// reverse:121
// palindrome

// Enter the no:123
// reverse:321
// not palindrome


//  check a string is palindrome or not 

// #include<iostream>
// using namespace std;
// int main(){
//     string str="aba";
//     string rev="";
//     for(int i=str.length()-1; i>=0; i--){
//         rev=rev+str[i];
//     }
//     cout<<rev<<endl;
    
//     if(str==rev){
//         cout<<"palindrome";
//     }
//     else{
//         cout<<"not";
//     }
//     return 0;
// }



//// palindrom array 


// #include <iostream>
// using namespace std;

// int p(int arr[], int n){
//     int flag=0;
//     for(int i=0; i<=n/2 && n!=0; i++){
//         if(arr[i]!= arr[n-i-1]){
//         flag=1;
//         break;
//         }
        
//     }

//     if(flag==1){
//         cout<<"not palindrome";
//     }else{
//         cout<<"palindrome";
//     }
    
// }
// int main() {
//      int arr[] = { 1, 2, 3, 2, 1 };
//     //int n=sizeof(arr)/sizeof(arr[0]);
//     int n=5;
    
//     p(arr, n);

//     return 0;
// }