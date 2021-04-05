#include<stdio.h>

int min3(int num1, int num2, int num3){
    int min = num1;

    if(min > num2) min = num2;
    if(min > num3) min = num3;
    
    return min;
}

int main(){

    printf("%d\n", min3(10,2,3));
    printf("%d\n", min3(1,2,3));
    printf("%d\n", min3(10,0,3));



    return 0;

}