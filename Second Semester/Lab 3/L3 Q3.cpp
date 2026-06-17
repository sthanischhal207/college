#include <iostream>

using namespace std;

class carpark{
private:
    int carID;
    float chargePHr;
    float parkTimeHr;

public:
    void set_data(){
        cout << "CarID: ";
        cin >> carID;
        cout << "charge per hour: ";
        cin >> chargePHr;
        cout << "Park Time per Hour: ";
        cin >> parkTimeHr;
    }
    void print_carID(){
        cout << "CarID: " << carID << endl;
    }
    void print_chargePHr(){
        cout << "Charge Per Hour: " << chargePHr << endl;
    }
    void print_parkTimeHr(){
        cout << "Parked Time : " << parkTimeHr << " Hr\n";
    }
    void print_charges(){
        cout << "Total Charge : NPR. " << (chargePHr*parkTimeHr) << endl;
    }
};



int main(){
    carpark c;
    c.set_data();
    cout << "\n\nPrinting Data:\n";
    c.print_carID();
    c.print_chargePHr();
    c.print_parkTimeHr();
    c.print_charges();

    return 0;
}
