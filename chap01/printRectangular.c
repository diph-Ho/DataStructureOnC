//직사각형 출력
#include<stdio.h>

int main(void)
{
    int numA, numB;

    puts("사각형을 출력합니다.");
    printf("높이 : ");
    scanf("%d", &numA);
    printf("너비 : ");
    scanf("%d", &numB);


    for(int x = 0; x < numA; x++){
        for(int y = 0; y < numB; y++){
            printf("*");
        }
        putchar('\n');
    }

    return 0;
}