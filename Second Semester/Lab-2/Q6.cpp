#include <iostream>>
using namespace std;

float new_salary(float old_salary = 60000.0, float increased_percentage = 12.0){
    return old_salary * (1.0+increased_percentage/100.0);
}

int main(){
    float ceo,io,sa,p;
    cout << "Enter Salary of:\n";
    cout << "CEO: ";
    cin >> ceo;
    cout << "Information Officer ";
    cin >> io;
    cout << "System Analyst: ";
    cin >> sa;
    cout << "Programmers: ";
    cin >> p;

    cout << "\nNew salaries: \n";
    cout << "CEO: " << new_salary(ceo,9);
    cout << "\nInformation Officer " << new_salary(io,10);
    cout << "\nSystem Analyst: " << new_salary(sa);
    cout << "\nProgrammers: " << new_salary(p);



    return 0;
}
