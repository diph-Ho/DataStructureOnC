#include<stdio.h>

int main(void)
{
    int loopNum, num;
    int sum = 0;

    printf("n의 값을 입력하세요 : ");
    scanf("%d", &num);
    loopNum = 1;

    while(loopNum <= num){
        if(loopNum != num){
            printf("%d + ", loopNum);
        }else{
            printf("%d", loopNum);
        }
        sum += loopNum;
        loopNum++;
    }
    printf(" = %d", sum);

    return 0;
}