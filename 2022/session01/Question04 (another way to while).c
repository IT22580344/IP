#include <stdio.h>
int main(void)
{
    char stdID[8];
    int stdAns[4];
    int i,j,stdCount=5;

    FILE*cfPtr;
/*
    cfPtr = fopen("numbers.dat","w");
    if(cfPtr==NULL){
        printf("File can't be Open");
    }

    for(i=0;i<stdCount;i++){
        printf("Enter Student ID: ");
        scanf("%s",stdID);
        fprintf(cfPtr,"%s\t",stdID);

        printf("Enter Answers\n");

        for(j=0;j<4;j++){
            scanf("%d",&stdAns[j]);
            fprintf(cfPtr,"%d ",stdAns[j]);
        }
        fprintf(cfPtr,"\n");
    }

    fclose(cfPtr); */

    cfPtr = fopen("numbers.dat","r");

    if(cfPtr==NULL){
        printf("File can't be Open");
    }

    int correct[4] = {1,4,2,3};
    int Anscount;

    while(1){
        int ret = fscanf(cfPtr,"%s",stdID);
        if(ret == -1)
            break;
        Anscount = 0;
        for(j=0;j<4;j++)
        {
            fscanf(cfPtr,"%d ",&stdAns[j]);
            if(stdAns[j] == correct[j])
            {
                Anscount++;
            }
        }
        printf("%s %d\n",stdID,Anscount);
    }
    return 0;
}
