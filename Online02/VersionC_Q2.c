#include <stdio.h>
float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);
int main(void)
{
    int grade;
    float salary,hrsWorked;

    printf("Enter grade: ");
    scanf("%d",&grade);
    printf("Enter hours worked: ");
    scanf("%f",&hrsWorked);

    salary = calculateWeeklySalary(grade,hrsWorked);
    printDetails(grade,hrsWorked,salary);
    return 0;
}

//function implementation
float calculateWeeklySalary(int grade, float hrsWorked)
{
    if(grade == 1)
        return hrsWorked* 100.00;
    else if(grade == 2)
        return hrsWorked* 200.00;
    else if(grade == 3)
        return hrsWorked* 300.00;
}

void printDetails(int grade, float hrsWorked, float salary)
{
    puts("");
    printf("Grade: %d\n",grade);
    printf("HrsWorked: %.2f\n",hrsWorked);
    printf("Salary: %.2f\n",salary);

}
