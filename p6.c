#include<stdio.h>
int main()
{
	int Subject1, Subject2, Subject3, Subject4, Subject5, Sum;
	printf("Enter the marks secured in subject1 : \n");
	scanf("%d",&Subject1);
	printf("Enter the marks secured in subject2 : \n");
	scanf("%d",&Subject2);
	printf("Enter the marks secured in subject3 : \n");
	scanf("%d",&Subject3);
	printf("Enter the marks secured in subject4 : \n");
	scanf("%d",&Subject4);
	printf("Enter the marks secured in suject5 : \n");
	scanf("%d",&Subject5);
	Sum = Subject1 + Subject2 + Subject3 + Subject4 + Subject5;
	printf("The total marks secured in 5 subjects is : %d + %d + %d + %d + %d = %d\n",Subject1,Subject2,Subject3,Subject4,Subject5,Sum);
	return 0;
}
