#include "_A_B_C.h"
#include <stdio.h>
void _A_B_C(int num1, int num2) {
    int a=0,b=0,c=0,number1[10]={0},number2[10]={0};
    for(int i=0;i<4;i++){
        if(num1%10==num2%10)a++;
        number1[num1%10]++;
        number2[num2%10]++;
        num1/=10;
        num2/=10;
    }
    for(int i=0;i<10;i++){
        if(number1[i]!=number2[i])c++;
    }
    b=4-a-c/2;
    printf("%dA%dB\n",a,b);
}
