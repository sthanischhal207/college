#include <iostream>
using namespace std;

void convertToInches();
float convertToInches(float feet);
void convertToInches(float feet, float& inch);

int main(){
    convertToInches();

    float feet;
    cout << "Enter the value in feet: ";
    cin >> feet;
    float inches = convertToInches(feet);
    cout << "One argument inch [in main()]= " << inches;

    float inch;
    convertToInches(feet,inch);
    cout << "Two argument inch = " << inch;

    return 0;
}


void convertToInches(){
    float feet;
    cout << "\n\nEnter the value in feet: ";
    cin >> feet;
    float inches = feet * 12;
    cout << "No argument inch = " << inches;
}

float convertToInches(float feet){
    return feet * 12;
}

void convertToInches(float feet, float& inch){
    inch = feet*12;
}
