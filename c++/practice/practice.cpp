// // Online C++ compiler to run C++ program online


// // #include <iostream>
// // using namespace std;
// // bool isPrime(int n){
// //     if(n<2){
// //         return false;
// //     }
// //     for(int i=2 ;i<n; i++){
// //         if(n%i==0){
// //             return false;
// //             break;
// //         }
// //     }
// //     return true;
// // };
// // int main() {
// //   int low=1;
// //   int high=100;
 
   
// //   for(int i=low; i<=high; i++){
// //       if(isPrime( i))
// //       cout<< i << " ";
// //   }

// //     return 0;
// // }





// // #include <iostream>
// // using namespace std;
// // int main() {
// //     int arr[5]={1,2,3,4,5};
// //     int n=5;
    
// //     for(int i=0 ; i<n/2; i++){
// //         int temp=arr[i];
// //         arr[i]=arr[n-i-1];
// //         arr[n-i-1]=temp;
// //     }
// //     for(int i=0 ;i<n; i++)
// //     cout<<arr[i]<<" ";

// //     return 0;
// // }





// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {
//     string str="Bharath";
//     int n=str.length();
    
//     for(int i=0; i<n; i++){
//         int count=0;
//         for(int j=0; j<n; j++){
            
//             if(j<i && str[i]==str[j]){
//                 break;
//             }
//             if(str[i]==str[j]){
//                 count++;
//             }
//         }
//         if(count!=0){
//             cout<<str[i] << " is : "<< count<<endl;
//         }
//     }
    

//     return 0;
// }





// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;
// int merge(int arr1[], int arr2[],int n1, int n2, int arr3[]){
//     int i=0, j=0, k=0;
    
//     while(i<n1){
//         arr3[k++]=arr1[i++];
//     }
//     while(j<n2){
//         arr3[k++]=arr2[j++];
//     }
//     sort(arr3,arr3+n1+n2);
// };
// int main() {
//     int arr1[3]={1,2,4};
//     int n1=3;
//     int arr2[3]={3,5,6};
//     int n2=3;
    
//     int arr3[n1+n2];
//     merge(arr1,arr2,n1,n2,arr3);
    
//     for(int i=0; i<n1+n2; i++){
//         cout<<arr3[i]<<" ";
//     }

//     return 0;
// }






// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// bool linear(int arr[], int n, int k){
//     if(n==0)
//     return false;
    
//     if(arr[0]==k){
//         return true;
//     }else{
//         bool remain=linear(arr+1, n-1, k);
//         return remain;
//     }
// }
// int main() {
//   int arr[5]={4,5,3,2,6};
//   int n=5;
//   int k=2;
   
//   if(linear(arr,n, k)){
//       cout<<"yes";
//   }else{
//       cout<<"no";
//   }

//     return 0;
// }








// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// bool binary(int arr[], int n, int k){
//     int s=0, e=n-1;
    
//     while(s<=e){
//         int mid=(s+e)/2;
        
//         if(arr[mid]==k){
//             return true;
//         }
//         if(k< arr[mid]){
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//     }
//     return false;
// }
// int main() {
//   int arr[5]={1,3,4,5,6};
//   int n=5;
//   int k=51;
   
//   if( binary(arr,n,k)){
//       cout<<"yes";
//   }else{
//       cout<<"no";
//   }

//     return 0;
// }









// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {
//   string str="mam";
//   string s="";
//   for(int i=str.length()-1; i>=0; i--){
//       s+=str[i];
//   }
//   if(s==str){
//       cout<<"palin";
//   }else{
//       cout<<"no";
//   }

//     return 0;
// }










// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {
//   int n,fib;
//   cin>>n;
//   int a=0;
//   int b=1;
//   cout<<a<< " ";
//   cout<<b<<" ";
//   for(int i=2; i<=n; i++){
//         fib=a+b;
//       cout<<fib<<" ";
//       a=b;
//       b=fib;
//   }
//   //cout<<fib;

//     return 0;
// }









// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int temp=n;
//     int rev=0;
//     while(n>0){
//         rev=rev*10 + n%10;
//         n=n/10;
//     }
//     if(rev==temp){
//         cout<<"palindrome";
//     }else{
//         cout<<"not";
//     }

//     return 0;
// }












// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int temp=n;
//     int sum=0;
//     while(n>0){
//         int r=(n%10);
//         sum=sum + r*r*r;
//         n=n/10;
//     }
//     cout<<sum;
//     if(sum==temp){
//         cout<<"Arm";
//     }else{
//         cout<<"not";
//     }

//     return 0;
// }