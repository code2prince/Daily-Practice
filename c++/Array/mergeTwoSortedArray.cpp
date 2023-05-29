// merge two sorted array 

#include<bits/stdc++.h>
using namespace std;

int merge(int arr1[], int arr2[], int n1, int n2, int arr3[]){
    int i=0,j=0,k=0;

    while(i<n1){
        arr3[k++]=arr1[i++];
    }

    while(j<n2){
        arr3[k++]= arr2[j++];
    }

    sort(arr3, arr3+n1+n2);
}


int main(){
    int arr1[]={1,3,4,6,8,9};
    int n1=sizeof(arr1)/sizeof(arr1[0]);

    int arr2[]={2,4,5,6,7};
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    int arr3[n1+n2];

    merge(arr1, arr2,n1,n2,arr3);

    cout<<"after merging both sorted array : ";

    for(int i=0; i<n1+n2; i++){
        cout<<arr3[i]<<" ";
    }


    

return 0;
}


// after merging both sorted array : 1 2 3 4 4 5 6 6 7 8 9 



// merge two sorted array without using extra space  >>>*******


 /*
 
 class Solution{
    public:
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int left=n-1;
            int right=0;
            while(left>=0 && right<m){
                if(arr1[left] > arr2[right]){
                    swap(arr1[left--],arr2[right++]);
                }else{
                    break;
                }
            }
            // Sort first array
            sort(arr1, arr1 + n);
           
            // Sort second array
            sort(arr2, arr2 + m);
        } 
};*/









// #include <bits/stdc++.h>
// using namespace std;

// void merge(int arr1[], int arr2[], int n1, int n2){
//     int i=0, j=0, k=n2-1;
//     while(i<=k && j<n1){
//         if(arr1[i] < arr2[j]){
//             i++;
//         }
//         else{
//             swap(arr2[j++], arr1[k--]);
//         }
//     }
//     sort(arr1, arr1+n2);
    
//     sort(arr2, arr2+n1);
// }

// int main() {
//     int arr1[4]={1,4,7,9};
//     int n1=4;
    
//     int arr2[5]={2,3,4,5};
//     int n2=5;
    
//     merge(arr1, arr2, n1, n2);
//     cout<<"arr1 : ";
//     for(int i=0; i<n1; i++){
//         cout<<arr1[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"arr2 : ";
//     for(int i=0; i<n2; i++){
//         cout<<arr2[i]<<" ";
//     }

//     return 0;
// }

// arr1 : 1 2 3 4 
// arr2 : 4 5 7 9 


// we can also use vector and push all elements into it;


// #include<bits/stdc++.h>
// using namespace std;
// int merge(int arr1[], int arr2[], int n1, int n2){
//     vector<int>v;
//     for(int i=0; i<n1; i++){
//         v.push_back(arr1[i]);
//     }

//     for(int j=0; j<n2; j++){
//         v.push_back(arr2[j]);
//     }

//     sort(v.begin(), v.end());
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";   // 2 3 4 4 5 5 6 7 8 9 
//     }
// }
// int main(){
//     int arr1[]={2,3,4,5};
//     int arr2[]={4,5,6,7,8,9};
//     int n1=4;
//     int n2=6;

//     merge(arr1, arr2, n1,n2);

// }