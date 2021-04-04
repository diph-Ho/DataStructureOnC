#include<stdio.h>

int max3(int num1, int num2, int num3){
    int max = num1;
    if (num2 > max) max = num2;
    if(num3 > max) max = num3;

    printf("%d\n", max);
    return max;
    
}

int main(){

    max3(4,10,2);
    max3(1,11,2);
    max3(4,10,22);
    max3(4,240,2);
    max3(41,10,2);
    max3(42,10,2);

    return 0;
}