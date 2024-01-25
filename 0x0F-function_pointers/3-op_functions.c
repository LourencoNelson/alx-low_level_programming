#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - calculates the sum
 * @a: 1st operand
 * @b: 2nd operand
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference
 * @a: 1st operand
 * @b: 2nd operand
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product
 * @a: 1st operand
 * @b: 2nd operand
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division
 * @a: 1st operand
 * @b: 2nd operand
 *
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder
 * @a: 1st operand
 * @b: 2nd operand
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
