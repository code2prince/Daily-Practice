#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int matrix[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            sum+=matrix[i][j];
        }
    }
    cout<<"total sum: "<<sum;
}

// total sum: 66