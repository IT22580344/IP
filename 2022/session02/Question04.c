#include <stdio.h>
#include <string.h>
void writeFile();
void readFile();
int main(void)
{
    char name[10];
    char uName[10];
    char tNumber[10];
    char temp[10];
    int i;

    FILE*cfPtr;
    /*
    cfPtr = fopen("Directory.dat","w");

    if(cfPtr == NULL)
    {
        printf("file Can't be Open");
        return -1;
    }

    for(i=0;i<5;i++)
    {
        printf("Enter Name: ");
        scanf("%s",name);
        fprintf(cfPtr,"%s\t",name);
        printf("Enter Telephone Number: ");
        scanf("%s",tNumber);
        fprintf(cfPtr,"%s\n",tNumber);
    }
    fclose(cfPtr);
    */

    printf("Enter a Name: ");
    scanf("%s",uName);

    cfPtr = fopen("Directory.dat","r");
    if(cfPtr == NULL)
    {
        printf("file Can't be Open");
        return -1;
    }

    int flag = 0;
    while(!feof(cfPtr))
    {
        int ret= fscanf(cfPtr,"%s",name);
        if(ret == EOF)
            break;
        if(strcmp(name,uName)==0)
        {
            flag = 1;
            fscanf(cfPtr,"%s",tNumber);
            break;
        }



    }

    if(flag == 1){
        printf("%s : ",name);
        printf("%s",tNumber);
    }
    else if(flag == 0){
        printf("Error Try another Name");
    }
    return 0;
}
