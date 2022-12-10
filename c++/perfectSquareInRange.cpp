// prefect square into a given range
/*
Input:
a = 9, b = 25
Output:
3
Explanation:
There are 3 perfect squares between 9
and 25. They are 9, 16, and 25.



Example 2:
Input:
a = 1, b = 7
Output:
2
Explanation:
There are 2 perfect squares between 1
and 7. They are 1, and 4.
*/


#include<iostream>
using namespace std;
int main(){
    int a=9, b=25;
    int count=0;
    for(int i=1; i<=b; i++){
        if(i*i>=a && i*i<=b)
        count++;
    }
    cout<<"total perfect square: "<<count;
}

// total perfect square: 3