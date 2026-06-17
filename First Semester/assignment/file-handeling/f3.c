// fprintf() and fscanf()

#include <stdio.h>

int main(){
    printf("Enter a File Name: ");
    char filename[20];
    gets(filename);
    FILE *fp = fopen(filename,"w");
    char name[20];
    char adress[20];
    char gender;
    char DOB[12];
    printf("Enter Number of people: ");
    int n;
    scanf("%d",&n);
    int i;
    printf("Enter following Details:\n");
    for(i=0 ; i<n ; i++){
        printf("\nPerson %d:\n",i+1);
        printf("Name: ");
        scanf(" %[^\n]s",name);
        printf("Adress: ");
        scanf(" %[^\n]s",adress);
        printf("Gender: ");
        scanf(" %c",&gender);
        printf("DOB: ");
        scanf(" %s",DOB);
        //writing file in a formatted form using fprintf
        fprintf(fp,"%s,%s,%c,%s\n",name,adress,gender,DOB);
    }
    printf("\nFile sucessfully Written......\n");
    fclose(fp);
    fp = fopen(filename,"r");
    printf("\nReading file......\n");
    printf("File content:\n_______________\n");
    //reading file using fscanf()
    while (fscanf(fp, " %[^,],%[^,],%c,%s", name, adress, &gender, DOB) == 4) {
        printf("%s, %s, %c, %s\n", name, adress, gender, DOB);
    }
    printf("_______________\n");
    return 0;
}

//Output
/*
Enter a File Name: test.txt
Enter Number of people: 3
Enter following Details:

Person 1:
Name: Nischhal Shrestha
Adress: Chandragiri
Gender: M
DOB: 2064-05-01

Person 2:
Name: Nikit Bhatta
Adress: Lalitpur
Gender: M
DOB: 2066-04-09

Person 3:
Name: Mahodaya Bhandari
Adress: Deauba Chowk                                                            
Gender: M
DOB: 2009-88-08

File sucessfully Written......

Reading file......
File content:
_______________
Nischhal Shrestha, Chandragiri, M, 2064-05-01
Nikit Bhatta, Lalitpur, M, 2066-04-09
Mahodaya Bhandari, Deauba Chowk, M, 2009-88-08
_______________
*/