// fputs() and fgets()

#include <stdio.h>

int main(){
    printf("Enter a File Name: ");
    char filename[20];
    gets(filename);
    FILE *fp = fopen(filename,"w");
    printf("Enter a File Content: ");
    char str[300];
    scanf(" %[^\n]s",str);
    fputs(str,fp);
    
    printf("\nFile sucessfully Written......\n");
    fclose(fp);
    fp = fopen(filename,"r");
    printf("\nReading file......\n");
    printf("File content:\n_______________\n");
    while(fgets(str,300,fp)){
        printf("%s",str);
    }
    printf("\n_______________\n");
    fclose(fp);

    return 0;
}

//Output
/*
Enter a File Name: kxa.txt
Enter a File Content: k xa vai sanchai chas ni??

File sucessfully Written......

Reading file......
File content:
_______________
k xa vai sanchai chas ni??
_______________
*/