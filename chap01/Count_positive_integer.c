//양의 정수를 입력받아 자릿수를 출력

#include<stdio.h>

int main(void)
{
    int num, count;

    printf("양의 정수를 입력하세요 : ");
    scanf("%d", &num);
    do
    {
        num = num / 10;
        count++;
    } while (num > 0);
    
    printf("그 수는 %d자리 입니다.\n", count);
}