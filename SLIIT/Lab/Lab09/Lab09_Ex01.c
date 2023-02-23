#include <stdio.h>
int main(void)
{
    int i,no;
    FILE*cfPtr;//create file pointer
    cfPtr = fopen("numbers.txt","w"); // create and open file for writing
    if(cfPtr==NULL){
        printf("Fail to create file\n");
        return -1;
    }
    for(i=1;i<=5;i++){
        printf("Enter a number: ");
        scanf("%d",&no);

        fprintf(cfPtr,"%d\n",no); // write number to the file
    }
    fclose(cfPtr); // close file

    cfPtr = fopen("numbers.txt","r"); // file open for reading
    fscanf(cfPtr,"%d",&no);
    while(!feof(cfPtr))
    {
        printf("%d\t",no);
        fscanf(cfPtr,"%d",&no); //read numbers form file

    }
    fclose(cfPtr);
    return 0;
}
