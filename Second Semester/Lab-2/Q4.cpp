#include <iostream>
using namespace std;

float &comp(float &t1, float &t2);

int main(){
    float t1,t2;
    cout << "Enter Two temperature";
    cin >> t1 >> t2;
    float newTemp;
    cout << "Enter another temp you want to set to larger: ";
    cin >> newTemp;
    comp(t1,t2) =  newTemp;
    cout << "After setting:\n";
    cout << "\nT1 = " << t1 << "\nT2 = " << t2 << endl;

    return 0;
}

float &comp(float &t1, float &t2){
    if(t1>t2) return t1;
    return t2;
}
