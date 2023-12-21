#include <stdio.h>

/**
 * add_three_numbers - Adds three numbers.
 * @a: The first number.
 * @b: The second number.
 * @c: The third number.
 *
 * Return: The sum of the three numbers.
 */
int add_three_numbers(int a, int b, int c)
{
	int sum;

	sum = a + b + c;
	return sum;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int num1, num2, num3, result;

	/* Input: Three numbers */
	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	/* Calculate the sum */
	result = add_three_numbers(num1, num2, num3);

	/* Output: Display the result */
	printf("Sum of the three numbers: %d\n", result);

	return 0;
}
