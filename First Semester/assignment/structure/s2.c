//Array of Structure

#include <stdio.h>

struct company {
    char name[30];
    char location[30];
    int No_Of_Employee;
    float annual_budget;
};

int main(){
    printf("Enter Number of Company: ");
    int n;
    scanf("%d",&n);

    struct company C[n];
    int i;
    printf("Enter Following Details:: \n");
    for(i = 0 ; i<n ; i++){
        printf("----For Company %d---- \n",i+1);
        printf("Name: ");
        scanf(" %[^\n]s",C[i].name);
        printf("Location: ");
        scanf(" %[^\n]s",C[i].location);
        printf("Number of Employees: ");
        scanf("%d",&C[i].No_Of_Employee);
        printf("Annual Budget: ");
        scanf("%f",&C[i].annual_budget);
        printf("\n");
    }

    //Displaying Structure
    printf("\n----Stored Data----\n");
    printf("\nName\t\t\tLocation\t\tNo of Employees\t\tAnnual Budget\n");
    for(i=0 ; i<n ; i++)
        printf("%-16s\t%-16s\t%-24d%-.2f\n",C[i].name,C[i].location,C[i].No_Of_Employee,C[i].annual_budget);
    return 0;
}



//Output
/*
Enter Number of Company: 5

Enter Following Details:: 
----For Company 1---- 
Name: Nischhal Pvt Limited
Location: Chandragiri
Number of Employees: 324
Annual Budget: 232523

----For Company 2---- 
Name: Clamphook Acadamy
Location: Thapata;i
Number of Employees: 23
Annual Budget: 234

----For Company 3---- 
Name: PEA
Location: Thapathali
Number of Employees: 23
Annual Budget: 342325

----For Company 4---- 
Name: Tesr
Location: Test
Number of Employees: 334
Annual Budget: 3434

----For Company 5---- 
Name: Test 2
Location: ldsfds
Number of Employees: 34
Annual Budget: 25


----Stored Data----

Name                    Location                No of Employees         Annual Budget
Nischhal Pvt Limited    Chandragiri             324                     232523.00
Clamphook Acadamy       Thapata;i               23                      234.00
PEA                     Thapathali              23                      342325.00
Tesr                    Test                    334                     3434.00
Test 2                  ldsfds                  34                      25.00
*/