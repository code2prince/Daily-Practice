/*
Problem Statement – Vohra went to a movie with his friends in a Wave theatre and during  break time he bought pizzas, puffs and cool drinks.
 Consider   the following prices : 

Rs.100/pizza
Rs.20/puffs
Rs.10/cooldrink
Generate a bill for What Vohra has bought.

Sample Input 1:

Enter the no of pizzas bought:10
Enter the no of puffs bought:12
Enter the no of cool drinks bought:5
*/


#include <iostream>
using namespace std;

int main() {
    
   int pizza;
   int puff;
   int coldDrink;
   
   cout<<"Enter no of pizza:";
   cin>>pizza;
   
   cout<<"no of puff:";
   cin>>puff;
   
   cout<<"no of cold drink:";
   cin>>coldDrink;
   
   int pizz=100*pizza;
   cout<<"total pizza price:"<<pizz<<endl;
  
   
   int puf=20*puff;
   cout<<"total puff price:"<<puf<<endl;
   
   int cold=10*coldDrink;
   cout<<"total cold Drink price:"<<cold<<endl;
   
   int total= pizz+ puf + cold;
   cout<<"total bill:"<< total;
    return 0;
}