//fread() and fwrite()

#include <stdio.h>

struct person{
    char name[20];
    char adress[20];
    char gender;
    char DOB[12];
};

int main(){
    struct person P;
    printf("Enter a File Name: ");
    char filename[20];
    gets(filename);
    FILE *fp = fopen(filename,"w");
    printf("Enter Number of people: ");
    int n;
    scanf("%d",&n);
    int i;
    printf("Enter following Details:\n");
    for(i=0 ; i<n ; i++){
        printf("\nPerson %d:\n",i+1);
        printf("Name: ");
        scanf(" %[^\n]s",P.name);
        printf("Adress: ");
        scanf(" %[^\n]s",P.adress);
        printf("Gender: ");
        scanf(" %c",&P.gender);
        printf("DOB: ");
        scanf(" %s",P.DOB);
        //writing file in a formatted form using fprintf
        fwrite(&P,sizeof(struct person),1,fp);
    }
    printf("\nFile sucessfully Written......\n");
    fclose(fp);
    fp = fopen(filename,"r");
    printf("\nReading file......\n");
    printf("File content:\n_______________\n");
    //reading file using fscanf()
    while (!feof(fp)) {
        fread(&P,sizeof(struct person),1,fp);
        printf("%s, %s, %c, %s\n", P.name, P.adress, P.gender, P.DOB);
    }
    printf("_______________\n");

    return 0;
}

//Output
/*
Enter a File Name: data.txt
Enter Number of people: 2
Enter following Details:

Person 1:
Name: ram shrestha
Adress: somewhere
Gender: M
DOB: 232-45-543

Person 2:
Name: Mayalu Karki
Adress: jere tole
Gender: F
DOB: 234-545-443 

File sucessfully Written......

Reading file......
File content:
_______________
ram shrestha, somewhere, M, 232-45-543
Mayalu Karki, jere tole, F, 234-545-443
_______________
*/