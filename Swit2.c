//Accept two integer and an operator as character performs corresponding operation and display the result
#include<stdio.h>
int main()
{
	int x, y;
	char op;
	printf("Enter two integers and an operator (+, - * /):");
	scanf("%d %d %c", &x,&y,&op);
	
	switch (op)
	{
		case '+':
			printf("Addition of %d & %d is %d",x,y,x + y);
			break;
		case '-':
			printf("Subtraction of %d & %d is %d",x,y,x - y);
			break;
		case '*':
			printf("Multiplication of %d & %d is %d",x,y,x * y);
			break;
		case '/':
			printf("Division of %d & %d is %d",x,y,x / y);
			break;
		default:
			printf("Invalid charchter %c",op);
	}
	return 0;
}
