// b - a 단, 변수 b에 입력한 값이 a 이하면 변수 b의 값을 다시 입력하세요.

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    int loopNum, numA, numB;
    bool first = true;

    printf("a의 값 : ");
    scanf("%d", &numA);
    do
    {
        if(!first){ printf("a보다 큰 값을 입력하세요!\n"); }
        printf("b의 값 : ");
        scanf("%d", &numB);
        first = false;
    } while (numB <= numA);
    printf("b - a는 %d 입니다.\n", numB - numA);
}