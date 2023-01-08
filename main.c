#include <stdio.h>

int main() {
    for(int i=0;i<6;i++) {
        printf("%d", i);

        /*Stars prints here*/
        for (int j = 6; j > 0; j--){
            if(j>i)
               printf(" ");
            else
               printf("*");
            }
            printf("\n");
        }


    }

