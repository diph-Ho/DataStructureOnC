//출력 결과
/*
   |  1  2  3  4  5  6  7  8  9
---+---------------------------
  1|  1  2  3  4  5  6  7  8  9
  2|  2  4  6  8 10 12 14 16 18
  3|  3  6  9 12 15 18 21 24 27
  4|  4  8 12 16 20 24 28 32 36
  5|  5 10 15 20 25 30 35 40 45
  6|  6 12 18 24 30 36 42 48 54
  7|  7 14 21 28 35 42 49 56 63
  8|  8 16 24 32 40 48 56 64 72
  9|  9 18 27 36 45 54 63 72 81
*/
#include<stdio.h>

int main(void)
{
    for(int numA = 1; numA < 12; numA++){
        for(int numB = 1; numB < 12; numB++){
            if(numA > 2 && numB > 2){
                printf("% 3d", (numA-2)*(numB-2));
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