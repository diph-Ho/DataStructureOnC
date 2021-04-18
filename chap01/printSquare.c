//정사각형 출력
#include<stdio.h>

int main(void)
{
    int num;

    puts("사각형을 출력합니다.");
    printf("입력할 수 : ");
    scanf("%d", &num);

    for(int x = 0; x < num; x++){
        for(int y = 0; y < num; y++){
            printf("*");
        }
        putchar('\n');
    }

    return 0;
}