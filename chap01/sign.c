#include<stdio.h>

int main(void)
{

    int num1;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num1);

    if (num1 > 0){
        printf("양수입니다.\n");
    }else if (num1 < 0){
        printf("음수입니다.\n");
    }else{
        printf("0입니다.\n");
    }

    return 0;
}
