// 피라미드 출력

#include<stdio.h>
#include<stdbool.h>

void spira(int num); // 피라미드
void nrpira(int num); // 역 피라미드

int main(void)
{
    int num;
    bool flag = false;

    do
    {
        if(flag == !flag) puts("양의 정수를 입력하세요.\n");
        printf("몇 단 삼각형 입니까? : ");
        scanf("%d", &num);
        flag = !flag;
    } while (num < 0);

    spira(num);
    putchar('\n');
    nrpira(num);

    return 0;
}

void spira(int num)
{
    int blankLoop = num-1;
    for(int x = 1; x <= num; x++){
        for(int blank = blankLoop; blank > 0; blank--){
            printf(" ");
        }
        for(int y = 1; y <= (x-1)*2+1 ; y++){
            printf("*");
        }
        putchar('\n');
        blankLoop--;
    }
}

void nrpira(int num)
{
    int changeNum = num;
    for(int x = 1; x <= num; x++){
        for(int blank = 1; blank < x; blank++){
            printf(" ");
        }
        for(int y = 1; y <= (changeNum - 1)*2+1; y++){
            printf("%d",x);
        }
        putchar('\n');
        changeNum--;
    }
}