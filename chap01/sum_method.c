#include<stdio.h>

int sumof(int num1, int num2)
{
    int sum = 0;
    if(num1 <= num2){
        while(num1 <= num2){
            sum += num1;
            num1++;
        }
        return sum;
    }else{
        while(num2 <= num1){
            sum += num2;
            num2++;
        }
        return sum;
    }
}

int main(void)
{
    int num1, num2;

    printf("두 수를 입력하시오 ( ex) 1 2 : ");
    scanf("%d %d", &num1, &num2);
    printf("두 수 %d 와 %d 의 합은 : %d", num1, num2, sumof(num1,num2));

    return 0;
}