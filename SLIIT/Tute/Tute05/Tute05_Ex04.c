#include <stdlib.h>
int main()
{
       int i,j,k,m=7;
        for(i=1;i<=14;i++){
        if(i<=7){
            for(j=1;j<=i;j++)
                printf("*");
        }
        else{
            for(k=1;k<=m;k++)
                printf("*");
            m = m-2;
        }

        printf("\n");
    }
    return 0;
}
