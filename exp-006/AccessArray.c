#include <stdio.h>
#include <stdlib.h>

void myFunction();
void sum(int a, int b);

int main()
{

	int myNumberArray[6] = {20, 30, 60, 50, 55, 30};

	int accessArray = myNumberArray[1];
	printf("value = %d\n", accessArray);

	char charArray[4] = {'a','b','c','d'};
	for(int i=0; i<6; i++)
	{
		printf("Element[%d] = %d\n", i, myNumberArray);
	}
	printf("\n\n\n");
	myFunction();

	printf("\n\n\n");
	int num1, num2;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	sum(num1, num2);

	return 0;
}

void myFunction() {
	printf("Sum = %d\n", 10+5);
}

void sum(int a, int b)
{
	int sum = a + b;
	printf("Sum of %d+%d = %d\n", a, b, sum);
}