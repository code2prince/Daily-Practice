//pointer with arrays

#include <iostream>
using namespace std;
int main() {
    int arr[10]={2,7,11};
    
    //1st method   *************************
    cout<<"address of 1st memory block: "<<arr<<endl;   // address of 1st memory block: 0x7fffdbfca9d0
    
    // 2nd method
    cout<<"Address of 1st memory block: "<<&arr[0]<<endl; // Address of 1st memory block: 0x7fffdbfca9d0
    //***********************************


    
    cout<<arr[0]<<endl;  //2
    
    // using * for print
    cout<<"Value at 1st element of arr: "<<*arr<< endl;  //Value at 1st element of arr: 2
    
    ///////*******************************
    // it will increment 1st value by 1
    cout<<"value: "<<*arr+1<<endl;  // value: 3
    
    
    // or 2nd method
    cout<<"valuess...."<<*(arr)+1<<endl; //  valuess....3
    
    ////////////////////**************************


    cout<<"value at 2nd element : "<<*(arr+1)<<endl; // value at 2nd element : 7
    
    
    cout<<"value at 3rd element: "<<*(arr+2)<<endl;  // value at 3rd element: 11

    // important mcq *********
    cout<<arr[2]<<endl; // 11
    // if Its given in option like 
    cout<< 2[arr]<<endl;  // 11  >>> It will also print 2nd Index

    /* working model
    
    arr[i] = *(arr+i);
    i[arr]= *(i+arr);

    */ 

    
    

    return 0;
}