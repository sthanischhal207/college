#include <iostream>
#include <iomanip>
using namespace std;

struct Date{
    int year,month,day;
};

void display(struct Date d);

int main(){
    struct Date d;
    cout <<"Enter Year, Month and Day: ";
    cin >> d.year >> d.month >> d.day;
    display(d);

    return 0;
}

void display(struct Date d){
    cout << setw(4) << d.year << '/';
    cout << setw(2) << d.month << '/';
    cout << setw(2) << d.day ;
}