
#include <iostream>

using namespace std;
int main()
{
    int n1, n2, i, count, r, sum, n;
    cout<<"Enter n1:";
    cin>>n1;
    cout<<"Enter n2:";
    cin>>n2;

    if(n1>n2){
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    for (i = n1; i <= n2; i++)
    {
        count = 0;
        n = i;

        while (n > 0)
        {
            count++;
            n = n / 10;
        }
        
        sum = 0;
        n=i;

        while (n > 0)
        {
            r = n % 10;
            sum = sum + (r * r * r);
            n = n / 10;
        }
        if (sum == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}

// Enter n1:1
// Enter n2:1000
// 1 153 370 371 407 