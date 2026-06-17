#include <iostream>

using namespace std;

class Celcius{
    float val;
    public:
        void set_val(){
            cout << "\nEnter the temp in Celcius: ";
            cin >> val;
        }
        float convert(){
            return (val*9.0/5.0)+32.0;
        }
};

class Far{
    float val;
    public:
        void set_val(){
            cout << "\nEnter the temp in Farenheit: ";
            cin >> val;
        }
        float convert(){
            return (val-32.0)*(5.0/9.0);
        }
};

int main(){
    Far f;
    Celcius c;
    c.set_val();
    cout << "Its value in Farenheit is " << c.convert();
    f.set_val();
    cout << "Its value in Celcius is " << f.convert();


    return 0;
}
