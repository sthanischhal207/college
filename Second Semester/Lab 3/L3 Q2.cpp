#include <iostream>

using namespace std;

class Num{
    int val;
    public:
        void set_val(){
            cout << "\nEnter the number: ";
            cin >> val;
        }
        void is_prime(){
            bool is_prime = true;
            if(val < 2)
                cout << val << " is neither";
            else {
                for(int i = 2;i<val;i++){
                    if (val%i == 0) is_prime = false; break;
                }
                if(is_prime == true) cout << val << " is a Prime Number";
                else cout << val << " is not a Prime Number";
            }
        }
    };

int main(){
    Num n;
    char input = 'y';
    while(input == 'y'){
        n.set_val();
        n.is_prime();
        cout << "\n\nAgain? (y/n): ";
        cin >> input;
    }



    return 0;
}

