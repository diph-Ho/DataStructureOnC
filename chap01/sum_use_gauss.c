#include<stdio.h>

int main(void)
{
    int num;

    printf("n의 값을 입력하세요 : ");
    scanf("%d", &num);

    printf("총 합 : %d", ((1+num)*num)/2);

    return 0;
}