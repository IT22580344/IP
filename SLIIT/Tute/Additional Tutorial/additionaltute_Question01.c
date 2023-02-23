#include <stdio.h>
int main(){
    int i=0;
    int java=0;
    int web=0;
    int cnet=0;
    int proNum;

    while(i<=100){
        if(proNum==-99)
        break;
        printf("Enter program Number(123): ");
        scanf("%d",&proNum);
        if(proNum==1){
            java = java+1500;
            i++;
            continue;
        }
         if(proNum==2){
            web = web+1000;
            i++;
            continue;
        }
         if(proNum==3){
            cnet = cnet+2000;
            i++;
            continue;
        }

    }
    printf("Total of Java Programming:%d\n",java);
    printf("Total of Web Development:%d\n",web);
    printf("Total of Computer Network:%d\n",cnet);
    return 0;
}
