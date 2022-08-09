// Pointer 
#include <iostream>
using namespace std;
int main() {
int num=5;          //5
cout<<num<<endl;
cout<<"address of num:"<<&num;     //address of num:0x7ffcfb6b2784
    return 0;
}


// #include <iostream>
// using namespace std;
// int main() {
// int num=5;
// int *ptr=&num;
// cout<<"value of *ptr is:"<<*ptr<<endl;   //value of *ptr is:5
// cout<<"value of ptr:"<<ptr<<endl;        //value of ptr:0x7ffd4eb0477c

// int *p=0;
// cout<<*p;    //Segmentation fault
//     return 0;
// }


        // int i=5;

        // int *p=0;
        // p=&i;

        //or we can write as (int *p=&i;)

        // cout<<"p:"<<p<<endl;   //p: 0x7fff9bfd791c
        // cout<<"*p:" <<*p<< endl;   //*p: 5



// #include <iostream>
// using namespace std;
// int main() {
// int num=5;
// int a=num;

// cout<<"before:"<<num<<endl;   // before:5

// a++;
// cout<<"after:" <<num<< endl;   // after:5

// or we can write as:
// int b=a++;
// cout<<"b:" <<b<< endl;   //b: 5

// int b=++a;
// cout<<"b:" <<b<< endl;   //b:6


//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
// int num=5;
// int *p=&num;

// cout<<"before:"<<num<<endl;   // before:5

// (*p)++;
// cout<<"after:" <<num<< endl;   // after:6

// // coping a pointer
// int *q=p;
// cout<<"address of num :"<<&num<<endl;  //address of num :0x7fff31120004
// cout<<"p:"<<p <<"....."<<q<<endl;  // p:0x7fff31120004.....0x7fff31120004

// cout<<"*p:"<<*p << "...."<<*p<<endl; //  *p:6....6


//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
// int i=3;
//  int  *t= &i;

// *t++; 
// cout<<"before t:"<<t<<endl;   // before t:0x7ffd366ebaf0

// t++;
// cout<<"after:" <<t<< endl;   // after:0x7ffd366ebaf4



//     return 0;
// }