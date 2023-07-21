#include<stdio.h>
int main()
{
	int input;
	int sum = 0;
	double count = 0;

	while(1) {
		printf("Enter a number");
		scanf("%d", &input);
		if (input <= 0) {
			break; 
		} 
		sum = sum + input;
		count++; 
	}

	printf("Sum = %d Average = %.2f \n", sum, sum/count);
	return 0;
}
