#include<stdio.h>
int main()
{
	int mark;
	printf("Enter Your Marks:\n");
	scanf("%d",&mark);
	
	if (mark>=0 && mark<=39)
	printf("Fail.\n");
	
	else if (mark>= 40 && mark<=49)
	printf("You scored D.\n");
	
	else if (mark>=50 && mark<= 59)
	printf("You scored C.\n");
	
	else if (mark>=60 && mark<= 69)
	printf("You Scored B.\n");
	
	else if(mark>= 70 && mark<= 100)
	printf("You Scored A.\n");
	
	else 
	printf("Invalid Entry \n");
	
	return 0;
}