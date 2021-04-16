/*1,2,3,...,n의 합을 구합니다.(while)*/

#include<stdio.h>

int main(void)
{
    int loopNum, num;
    int sum = 0;

    puts("1부터 n까지의 합을 구합니다");
    printf("n의 값 : ");
    scanf("%d", &num);
    
    loopNum = 1;

    while(loopNum <= num){
        sum += loopNum;
        loopNum++;
    }

    printf("%d", sum);

    return 0;
}