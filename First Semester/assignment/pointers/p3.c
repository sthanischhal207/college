//Pointer and Structure

#include <stdio.h>

struct company {
    char name[30];
    char location[30];
    int No_Of_Employee;
    float annual_budget;
};

void readStruct(struct company *);
void printStruct(struct company *);

int main(){
    struct company C;
    readStruct(&C);
    printStruct(&C);
    return 0;
}

void readStruct(struct company *C){
    printf("Enter Following Details of Company: \n");
    printf("Name: ");
    scanf(" %[^\n]s",C->name);
    printf("Location: ");
    scanf(" %[^\n]s",C->location);
    printf("Number of Employees: ");
    scanf("%d",&C->No_Of_Employee);
    printf("Annual Budget: ");
    scanf("%f",&C->annual_budget);
}

void printStruct(struct company *C){
    printf("\n----Stored Data----\nName: %s\nLocation: %s\nNo of Employees: %d\nAnnual Budget: %.2f",C->name,C->location,C->No_Of_Employee,C->annual_budget);
}


//Output
/*
Enter Following Details of Company: 
Name: Chaudhari Group
Location: Satungal, Kathmandu
Number of Employees: 3254
Annual Budget: 87453766 

----Stored Data----
Name: Chaudhari Group
Location: Satungal, Kathmandu
No of Employees: 3254
Annual Budget: 87453768.00
*/