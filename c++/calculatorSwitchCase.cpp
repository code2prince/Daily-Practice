// Calculator using switch case

#include<iostream>
using namespace std;
int main(){
    char op;
    float num1,num2;

    cout<<"Enter the value of num1:";
    cin>>num1;
    cout<<"Enter the value of num2:";
    cin>>num2;

    cout<<"please enter an operation: (+, - , * , /  ) : ";
    cin>> op;

    switch(op){
        case '+' :
        cout<<num1+num2;
        break;

        case '-':
        cout<<num1-num2;
        break;

        case '*' :
        cout<<num1*num2;
        break;

        case '/':
        cout<<num1/num2;
        break;

       

        default:
        cout<< "please enter a valid operator !!!";
        break;

    }
    return 0;
}


// Enter the value of num1:4
// Enter the value of num2:6
// please enter an operation: (+, - , * , /  ) : +
// 10