
#include <iostream>
using namespace std;

inline float net_payment(float salary){
    return (salary - (0.1)*salary);
}


int main(){
    float salary;
    cout <<"Enter Salary: ";
    cin >> salary;
    cout << "Net Payment = " << net_payment(salary);


    return 0;
}
