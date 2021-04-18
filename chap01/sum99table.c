#include<stdio.h>

int main(void)
{
    for(int numA = 1; numA < 12; numA++){
        for(int numB = 1; numB < 12; numB++){
            if(numA > 2 && numB > 2){
                printf("% 3d", (numA-2)+(numB-2));
            }else{
                if(numA == 1 && numB >2 ){
                    printf("% 3d", numB-2);
                }else if(numA == 2 && numB == 1){
                    printf("---+---------------------------");
                }
                if(numA > 2 && numB == 1){
                    printf("% 3d", numA-2);
                }
                if(numB == 2 && numA == 1){
                    printf("   |");
                }else if(numB==2 && numA != 2){
                    printf("|");
                }

            }
        }
        putchar('\n');
    }
}