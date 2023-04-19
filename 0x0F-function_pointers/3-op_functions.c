#include "3-calc.h"

/**
 * op_add - adds 2 numbers, a and b
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: the addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two numbers, a and b
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: the subtracted value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers, a and b
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: the multiplied value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers, a and b
 *
 *@a: the first number
 *
 *@b: the second number
 *
 *Return: the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the module of two numbers,a and b
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: modulus of the two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
