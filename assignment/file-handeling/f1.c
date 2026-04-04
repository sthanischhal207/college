// fputc() and fgetc()
// Create a file and Enter data then display 
#include <stdio.h>

int main(){
    printf("Enter a File Name: ");
    char filename[20];
    gets(filename);
    FILE *fp = fopen(filename,"w");
    printf("Enter a File Content: ");
    char ch;
    while((ch = getchar())!='\n'){
        fputc(ch,fp);
    }
    printf("\nFile sucessfully Written......\n");
    fclose(fp);
    fp = fopen(filename,"r");
    printf("\nReading file......\n");
    printf("File content:\n_______________\n");
    //ch = fgetc(fp);
    //while(ch!=EOF){
    while((ch = fgetc(fp))!=EOF){
        printf("%c",ch);
        //ch = fgetc(fp);
    }
    printf("\n_______________\n");
    fclose(fp);
    return 0;
}

//Output
/*
Enter a File Name: Hello.txt
Enter a File Content: Hello How you doing broo suppp

File sucessfully Written......

Reading file......
File content:
_______________
Hello How you doing broo suppp
_______________
*/