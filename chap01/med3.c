#include<stdio.h>

int med3(int num1, int num2, int num3)
{
   if(num1 <= num2){
       if(num2 <= num3){
           return num2;
       }else if(num3 <= num1){
           return num1;
       }else{
           return num3;
       }
   }else if(num3 < num2){
       return num2;
   }else if(num1 < num3){
       return num1;
   }else{
       return 3;
   }
}

int main()
{
    int num1, num2, num3;

    for(int i = 0; i < 6; i++){
        
        printf("숫자 1 : ");
        scanf("%d", &num1);
        printf("숫자 2 : ");
        scanf("%d", &num2);
        printf("숫자 3 : ");
        scanf("%d", &num3);

        printf("\n 가운데 값은 %d 입니다. \n", med3(num1, num2, num3));
    }

    return 0;
}