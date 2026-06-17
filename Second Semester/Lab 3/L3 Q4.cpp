#include <iostream>
#include <cmath>
using namespace std;


class Circle{
private:
    float r;
public:
    void set_data(){
        cout << "\nRadius of Circle: ";
        cin >> r;
    }
    float area(){
        return 3.14 * r * r;
    }
    float perimeter(){
        return 2.0*3.14*r;
    }
    float display(){
        cout << "\nArea of Circle: " << area();
        cout << "\nPerimeter of Circle: " << perimeter();
    }
};

class Triangle{
private:
    float a,b,c;
public:
    void set_data(){
        cout << "\nSide A: ";
        cin >> a;
        cout << "\nSide B: ";
        cin >> b;
        cout << "\nSide C: ";
        cin >> c;
    }
    float area(){
        float s = perimeter()/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    float perimeter(){
        return a+b+c;
    }
    float display(){
        cout << "\nArea of Triangle: " << area();
        cout << "\nPerimeter of Triangle: " << perimeter();
    }
};

class Rectangle{
private:
    float l,b;
public:
    void set_data(){
        cout << "\nLength: ";
        cin >> l;
        cout << "\nBreadth: ";
        cin >> b;
    }
    float area(){
        return l*b;
    }
    float perimeter(){
        return l+b;
    }
    float display(){
        cout << "\nArea of Rectangle: " << area();
        cout << "\nPerimeter of Rectangle: " << perimeter();
    }
};




int main(){
    Circle c;
    Triangle t;
    Rectangle r;

    c.set_data();
    t.set_data();
    r.set_data();

    c.display();
    t.display();
    r.display();

    if(c.area() == t.area()) cout << "\nArea of Circle and Triangle are equal\n";
    if(r.area() == t.area()) cout << "\nArea of Rectangle and Triangle are equal\n";
    if(r.area() == c.area()) cout << "\nArea of Rectangle and Circle are equal\n";
    else cout << "\nNone of the Area are equal";

    return 0;
}
