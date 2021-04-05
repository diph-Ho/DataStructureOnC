#include<stdio.h>

int max4(int num1, int num2, int num3, int num4){
    int max = num1;

    if(max < num2) max = num2;
    if(max < num3) max = num3;
    if(max < num4) max = num4;

    return max;
}

int main(){
    
    printf("%d\n", max4(1,2,3,4));
    printf("%d\n", max4(1,5,3,4));
    printf("%d\n", max4(1,6,3,4));
    printf("%d\n", max4(1,2,7,4));
    
}
