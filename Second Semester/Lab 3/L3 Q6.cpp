#include <iostream>

using namespace std;

class Time{
    int h,m,s;
    public:
        void set_val(){
            cout << "Hour: ";
            cin >> h;
            cout << "Minutes : ";
            cin >> m;
            cout << "Seconds: ";
            cin >> s;
        }
        void display_in_AM_PM(){
            if(h<12) cout << h ;
            else cout << h-12;
            cout << ":";
            cout << m << ":" << s;
            if(h<12) cout << " AM" ;
            else cout << " PM";
            cout << endl;
        }
        void display_in_24hr(){
            cout << h << ":" << m << ":" << s << endl;
        }

        Time add(Time t){
            Time temp;
            temp.s = s+t.s;
            temp.m = m+t.m+temp.s/60;
            temp.s %= 60;
            temp.h = h+t.h+temp.m/60;
            temp.m %= 60;
            temp.h %=24;
            return temp;
        }
    };

int main(){
    Time t1,t2,t3;
    cout << "Time 1: \n";
    t1.set_val();

    cout << "Time 1 in AM/PM: ";
    t1.display_in_AM_PM();
    cout << "Time 1 in 24-hr: ";
    t1.display_in_24hr();

    cout << "\n\nTime 2: \n";
    t2.set_val();

    cout << "Time 2 in AM/PM: ";
    t2.display_in_AM_PM();
    cout << "Time 2 in 24-hr: ";
    t2.display_in_24hr();


    t3 = t1.add(t2);

    cout << "\n\n------After Adding both time------\n";

    cout << "Time 3 in AM/PM: ";
    t3.display_in_AM_PM();
    cout << "Time 3 in 24-hr: ";
    t3.display_in_24hr();

    return 0;
}

