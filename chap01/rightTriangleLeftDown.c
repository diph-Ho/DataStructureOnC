//왼쪽 아래가 직각인 이등변 삼각형
#include<stdio.h>
#include<stdbool.h>

//함수 선언
void triangleLB(int num); //왼쪽 아래가 직각
void triangleLU(int num); //왼쪽 위가 직각
void triangleRB(int num); //오른쪽 아래가 직각
void triangleRU(int num); //오른쪽 위가 직각

int main(void)
{
    int num;
    bool flag = false;

    do
    {
        if(!flag) puts("양의 정수를 입력하세요.\n");
        printf("몇 단 삼각형 입니까? : ");
        scanf("%d", &num);
        flag = !flag;
    } while (num < 0);

    triangleLB(num);
    putchar('\n');
    triangleLU(num);
    putchar('\n');
    triangleRB(num);
    putchar('\n');
    triangleRU(num);
    
    return 0;

}

void triangleLB(int num)
{
    for(int x = 0; x < num; x++){
        for(int y = 0; y <= x; y++){
            printf("*");
        }
        putchar('\n');
    }
}

void triangleLU(int num)
{
    for(int x = num; x > 0; x--){
        for(int y = x; y > 0; y--){
            printf("*");
        }
        putchar('\n');
    }
} //왼쪽 위가 직각

void triangleRB(int num)
{
    int minum = num;
    for(int x = 0; x < num; x++){
        for(int forspace = minum-1; forspace > 0; forspace--){
            printf(" ");
        }
        for(int y = 0; y <= x; y++){
            printf("*");
        }
        minum--;
        putchar('\n');
    }
} //오른쪽 아래가 직각

void triangleRU(int num)
{
    int minum = num;
    for(int x = 0; x < num; x++){
        for(int y = 0; y < x; y++){
            printf(" ");
        }
        for(int forspace = minum; forspace > 0; forspace--){
            printf("*");
        }
        minum--;
        putchar('\n');
    }
} //오른쪽 위가 직각