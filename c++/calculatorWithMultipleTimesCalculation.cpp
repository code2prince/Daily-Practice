// Create a calculator which calculate multiple times values 
#include <iostream>
using namespace std;
int main() {
  char operartion;
  float num1, num2;
  bool done=false;
  
 
 while(!done){
     cout<<"please enter an opertion:  +, -, *, / or q for quit:  ";
    cin>>operartion;
    
    if(operartion=='q'){
        done=true;
        continue;
    }
   cout<<"Enter the value of num1: ";
  cin>>num1;
  
 cout<<"Enter the value of num2: ";
 cin>>num2;
 
     switch(operartion){
         case '+':
         cout<<"ans: "<<num1+num2<<endl;
         break;
         
          case '-':
         cout<<"ans: "<<num1-num2<<endl;
         break;
         
          case '*':
         cout<<"ans: "<<num1*num2<<endl;
         break;
         
          case '/':
         cout<<"ans: "<<num1/num2<<endl;
         break;
         
         default:
         cout<<"please enter a valid opertion !!!!!!"<<endl;
         break;
     }
 }

    return 0;
}


/*
please enter an opertion:  +, -, *, / or q for quit:  +
Enter the value of num1: 10.8
Enter the value of num2: 7.9
ans: 18.7
please enter an opertion:  +, -, *, / or q for quit:  *
Enter the value of num1: 13
Enter the value of num2: 2.1
ans: 27.3
please enter an opertion:  +, -, *, / or q for quit:
*/