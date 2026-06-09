#include <stdio.h>

char monthNames[12][50] = {
    "January",  "February","March",     "April",      "May",       "June", 
    "July",     "August",   "September","October",   "November",  "December"
};


float total_exp(float arr[12]){
    int j;
    float sum = 0;
    for(j=0 ; j<12 ; j++){
        sum += arr[j];
    }
    return sum;
}


int main(){
    printf("Enter Staring Year: ");
    int s_year;
    scanf("%d",&s_year);

    printf("Enter Ending Year: ");
    int e_year;
    scanf("%d",&e_year);

    int net_year = e_year-s_year+1;
    //array Declaration
    float all_data[net_year][12];
    
    int i;
    int j;
    for(i=s_year ; i<=e_year ; i++){
        printf("\nENTER DATA OF YEAR %d:\n",i);
        for(j=0 ; j<12 ; j++){
            printf("%s: ",monthNames[j]);
            scanf("%f",&all_data[i-s_year][j]);
        }
    }

    float Total_Exp[net_year];
    float all_total_exp = 0;
    for(i = 0 ; i<net_year ; i++){
        Total_Exp[i] = total_exp(all_data[i]);
        all_total_exp += Total_Exp[i];
    } 

    // total expenditure for each year.
    printf("\nTotal Expenditure of Years:\n");
    for(i=s_year ; i<=e_year ; i++){
        printf("%d -> %f\n",i,Total_Exp[i-s_year]);
    }
    
    // total expenditure for each year.
    printf("\nAverage Monthly Expenditure of Years:\n");
    for(i=s_year ; i<=e_year ; i++){
        printf("%d -> %f\n",i,Total_Exp[i-s_year]/(float)12);
    }

    printf("\n\nTotal Expenditure of the Entire range of years -> %f",all_total_exp);

    float avg_yearly_exp = all_total_exp/(float)net_year;
    printf("\nAverage Yearly Expenditure -> %f",avg_yearly_exp);

    printf("\n Average Monthly Expenditure of the Entire Range -> %f", avg_yearly_exp/(float)12);

    return 0;
}