#include <bits/stdc++.h>
using namespace std;
int main() {
    // int n=matrix.size();
    // int m=matrix[0].size();
    int matrix[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"element at ["<<i<<" "<<j<<"]: ";
            cout<<matrix[i][j]<<endl;
        }
    }
    
    

    return 0;
}

/*
element at [0 0]: 0
element at [0 1]: 1
element at [0 2]: 2
element at [0 3]: 3
element at [1 0]: 4
element at [1 1]: 5
element at [1 2]: 6
element at [1 3]: 7
element at [2 0]: 8
element at [2 1]: 9
element at [2 2]: 10
element at [2 3]: 11
*/