// stack implementation using array

#include<iostream>
#include<stack>
using namespace std;
class Stack{
    // properties 
    int *arr;
    int top;
    int size;


    // behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }



    void push(int element){
        if(size - top >1){
            top++;
            arr[top]=element;
        }else{
            cout<<"Stack overflow"<<endl;
        }
    }


    void pop(){
        if(top >=0){
            top--;
        }else{
            cout<<"stack underflow"<<endl;
        }
    }


    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }


    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }


};

int main(){
    // int n=5;

     Stack st(5);
    // stack<int>st;

    st.push(21);
    st.push(23);
    st.push(44);

    cout<<st.peek()<<endl;

}