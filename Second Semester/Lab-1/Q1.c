
/*
Write a program to calculate the sum of the following series, correct up to four decimal places. 
Make a user-defined function that calculates the sum of the following series and returns the value. 
Read the value of x in degrees, and pass it to your function that returns the sum.

sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
*/

#include<stdio.h>

float power(float n,int x){
    int i;
    float send = 1;
    for(i = 0 ; i<x ; i++){
        send *= n;
    }
    return send;
}

int find_factorial(int n){
    int i;
    int mult = 1;
    for(i = 2 ; i<=n ; i++){
        mult *= i;
    }
    return mult;
}


int main(){
    float n;
    printf("Enter a Number: ");
    scanf("%f",&n);

    float answer = 0;
    float diff = n;
    float old_ans=0,new_ans;
    int cnt = 1;
    while(diff > 0.0001){
        new_ans = power(n,2*cnt-1);
        new_ans /= find_factorial(2*cnt-1);
        if(cnt%2 == 1) answer += new_ans;
        else answer -= new_ans;

        diff = fabs(answer - old_ans);
        cnt++;
        old_ans = answer;
    }
    printf("Sin(%.2f rad) = %.4f",n,answer);
    return 0;
}
