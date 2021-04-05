#include<stdio.h>

int min4(int num1, int num2, int num3, int num4){

    int min = num1;
    if(min > num2) min = num2;
    if(min > num3) min = num3;
    if(min > num4) min = num4;

    return min;
}

int main(){

    printf("%d\n",min4(1,2,3,4));
    printf("%d\n",min4(1,0,3,4));
    printf("%d\n",min4(10,29,8,4));
    printf("%d\n",min4(1,22,32,41));


    return 0;

}