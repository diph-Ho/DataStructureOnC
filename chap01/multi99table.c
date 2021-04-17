// 구구단 1단에서 9단 출력

#include<stdio.h>

int main(void)
{
    printf("----------곱셈표----------\n");
    for(int numA = 1; numA < 10; numA++){
        for(int numB = 1; numB < 10; numB++){
            printf("% 3d", numA*numB);
        }
        putchar('\n');
    }
    return 0;
}