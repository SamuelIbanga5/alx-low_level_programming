#include "3-calc.h"
/**
 * get_op_func - Function that selects the correct function to
 * perform the operation asked by the user.
 * @s: Operator passed as argument to the program.
 * Return: Pointer to function that corresponds to the operator give
 * as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t operators[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (i < 10)
	{
		if (s[0] == operators->op[i])
		{
			break;
		}
		i++;
	}
	return (operators[i / 2].f);
}
