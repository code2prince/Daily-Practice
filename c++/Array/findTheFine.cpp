// Find the fine 

/*
Given an array of penalties fine[], an array of car numbers car[], and also the date. The task is to find the total fine which will be collected on the given date. Fine is collected from odd-numbered cars on even dates and vice versa.

 

Example 1:

Input:
N = 4, date = 12
car[] = {2375, 7682, 2325, 2352}
fine[] = {250, 500, 350, 200}
Output:
600
Explantion:
The date is 12 (even), so we collect the
fine from odd numbered cars. The odd
numbered cars and the fines associated
with them are as follows:
2375 -> 250
2325 -> 350
The sum of the fines is 250+350 = 600
 



Example 2:

Input:
N = 3, date = 8
car[] = {2222, 2223, 2224}
fine[] = {200, 300, 400}
Output:
300
*/


#include<iostream>
using namespace std;
int main(){
    int car[4] = {2375, 7682, 2325, 2352};
    int fine[4] = {250, 500, 350, 200};
    int n=4;
    int date=12;

    int sum=0;
    if(date%2==0){        //   >>> if even date
        for(int i=0; i<n; i++){
            if(car[i]%2!=0){      /// >>>> car no would be odd
                sum+=fine[i];
            }
        }
    }else{
        for(int j=0; j<n; j++){
            if(car[j]%2==0){
                sum+=fine[j];
            }
        }
    }
    cout<<"sum : "<<sum;
    return 0;
}


// sum : 600