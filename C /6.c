#include <stdio.h>

int main(){
    int i,j,k,p;

    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
            printf(" ");
        }
        for(p =0;p<=i;p++){
            printf("*");
        }
        for(k=0;k<i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
    // OUTPUT:-
    //     *    
    //    ***
    //   *****
    //  *******
    // *********
