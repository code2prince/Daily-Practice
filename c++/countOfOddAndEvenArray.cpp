#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int even=0;
    int odd=0;
   
    
    for(int i=0; i<n; i++){
        if(arr[i]%2==0)
           even++;
        
         else
            odd++;  
    }
    cout<<"total no of even elements:"<<even<<endl;
    cout<<"total no of odd elements:"<<odd<<endl;
    
    return 0;

}

// output:

// total no of even elements:3
// total no of odd elements:4