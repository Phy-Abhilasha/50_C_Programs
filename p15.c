#include<stdio.h>
int main()
{
    int subject1,subject2,subject3,subject4,subject5,total;
    float percentage;
    printf("Enter the marks secured in subject1: \n");
    scanf("%d",&subject1);
    printf("Enter the marks secured in subject2: \n");
    scanf("%d",&subject2);
    printf("Enter the marks secured in subject3: \n");
    scanf("%d",&subject3);
    printf("Enter the marks secured in subject4: \n");
    scanf("%d",&subject4);
    printf("Enter the marks secured in subject5: \n");
    scanf("%d",&subject5);
    total = subject1+subject2+subject3+subject4+subject5;
    percentage = (total/500.00)*100;
    if(percentage>80)
    {
        printf("Grade: A \n");
    }
    else if(percentage>60)
    {
        printf("Grade: B \n");
    }
    else if(percentage>40)
    {
        printf("Grade: C \n");
    }
    else
    {
        printf("Grade: D \n");
    }
}
