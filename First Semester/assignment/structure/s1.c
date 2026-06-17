//Normal single Structure

#include <stdio.h>

struct company {
    char name[30];
    char location[30];
    int No_Of_Employee;
    float annual_budget;
};

int main(){
    struct company C;
    printf("Enter Following Details of Company: \n");
    printf("Name: ");
    scanf(" %[^\n]s",C.name);
    printf("Location: ");
    scanf(" %[^\n]s",C.location);
    printf("Number of Employees: ");
    scanf("%d",&C.No_Of_Employee);
    printf("Annual Budget: ");
    scanf("%f",&C.annual_budget);

    //Displaying Structure
    printf("\n----Stored Data----\nName: %s\nLocation: %s\nNo of Employees: %d\nAnnual Budget: %.2f",C.name,C.location,C.No_Of_Employee,C.annual_budget);

    return 0;
}


//Output
/*
Enter Following Details of Company: 
Name: Nischhal ko Khatra Company
Location: mato ma xa
Number of Employees: 1
Annual Budget: 0.222

----Stored Data----
Name: Nischhal ko Khatra Company
Location: mato ma xa
No of Employees: 1
*/