/*
Write a program to read and display the names of students and their 
obtained marks in programming using an array of structures. 
Display the list of students and marks obtained according to marks in descending order.
*/

#include <stdio.h>

struct student{
    char name[100];
    int marks[8][2];
};
 
char sub[10][10] = { "Physics" , "Chemistry" , "Mathematics" , "Biology" , "English" , "Nepali" };

int main(){
    int n;
    printf("Enter Number of Students: ");
    scanf("%d",&n);

    struct student S[n];
    
    int i,j,k;
    for(i=0 ; i<n ; i++){
        printf("Enter Name: ");
        scanf("%s",S[i].name);
        printf("\nEnter the marks of the following subjects: ");
        for(j=0 ; j<6 ; j++){
            printf("%s : ",sub[j]);
            scanf("%d",&S[i].marks[j][0]);
            S[i].marks[j][1] = j;
        }
    }

    for(i = 0;i<n;i++){
        for(j=0 ; j<6 ; j++){
            for(k = j+1 ; k<6 ; k++){
                if(S[i].marks[j][0]>S[i].marks[k][0]){
                    int temp = S[i].marks[j][0];
                    S[i].marks[j][0] = S[i].marks[k][0];
                    S[i].marks[k][0] = temp;
                    temp = S[i].marks[j][1];
                    S[i].marks[j][1] = S[i].marks[k][1];
                    S[i].marks[k][1] = temp;
                }
            }
        }  
    }

    printf("\n\nStored Details of Students:\n");
    for(i=0 ; i<n ; i++){
        printf("Name: %s\n Entered Marks in Decending order:\n",S[i].name);
        for(j=0 ; j<6 ; j++){
            int sub_index = S[i].marks[j][1];
            printf("%s : %d\n",sub[sub_index],S[i].marks[j][0]);
        }
    }
    return 0;
}