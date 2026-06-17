#include <iostream>

using namespace std;

class Student{
private:
    int roll;
    char name[20];
    float marks[3];

public:
    void set_data(){
        cout << "Roll No: ";
        cin >> roll;
        cout << "Name: ";
        cin >> name;
        for(int i = 0;i<3;i++){
            cout << "Marks of sub "<<i+1<<" : ";
            cin >> marks[i];
        }
    }

    void display_student_data(){
        cout << "\nRoll No: " << roll;
        cout << "\nName: " << name;
        for(int i = 0;i<3;i++){
            cout << "\nMarks of sub "<<i+1<<" : " << marks[i];
        }
    }

    float total(){
        float sum = 0;
        for(int i = 0;i<3;i++){
            sum += marks[i];
        }
        return sum;
    }
    float avg(){
        return total()/3;
    }
    void display_total(){
        cout << "\nTotal: "<< total();
    }
    void display_avg(){
        cout << "\nAverage: "<< avg();
    }
    void display_grade(){
        float average = avg();
        cout << "\nGrade : ";
        if(average >=80) cout << "Distinction";
        else if(average >=60) cout << "First Division";
        else if(average >=45) cout << "Second Division";
        else if(average >=30) cout << "Third Division";
        else cout << "Failed";
    }
};



int main(){
    Student s;
    s.set_data();
    cout << "\n\n------Student Details------";
    s.display_student_data();
    s.display_total();
    s.display_avg();
    s.display_grade();

    return 0;
}
