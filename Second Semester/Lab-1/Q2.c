#include <stdio.h>

float find_fibo_ratio(int n){
    int a = 0, b = 0,c = 1;
    int cnt = 0;
    while(cnt != n){
        a = b;
        b = c;
        c = a+b;
        
        cnt += 1;

        //printf("%d %d %d\n",a,b,c);
    }
    
    return (float)b/(float)a;
}


int main(){
    float diff = 1;
    float old_ratio = 0,new_ratio;
    int cnt = 20;
    while(diff > 0.0001){
        new_ratio = find_fibo_ratio(cnt);

        diff = old_ratio - new_ratio;
        if(diff<0) diff *= (-1);
        old_ratio =  new_ratio;
        //printf("%f %f %f\n",old_ratio,new_ratio,diff);
    }
    int test = pow(10,4);
    printf("\nGolden Ratio = %.4f\n",old_ratio);

    return 0;
}