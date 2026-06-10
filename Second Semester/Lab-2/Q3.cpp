
#include <iostream>
using namespace std;

namespace Square{
    int num;
    float fun(){
        return num*num;
    }
}

namespace Cube{
    int num;
    float fun(){
        return num*num*num;
    }
}

int main(){
    Square  :: num = 10;
    Cube :: num = 10;
    cout <<"Square of 10 is -> " << Square::fun();
    cout <<"\nCube of 10 is -> " << Cube::fun();

    return 0;
}
