#include<iostream>
using namespace std;

class employee{
    private:
    int salary=10000;
// this is pvt we cann't access from out side

    public:

    //setter
    void setSalary(int s){
    salary=s;
    // if in public we put salary =20000 then final will be 20000 ans output becasue of public
    }

    // getter
    int getSalary(){
        return salary;
    }
};

int main(){
    employee obj;
    obj.setSalary(50000);
    cout<< obj.getSalary();
    return 0;
}

// 50000