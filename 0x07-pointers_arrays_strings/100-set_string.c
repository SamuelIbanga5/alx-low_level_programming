#include "main.h"
/**
 * set_string - Function that sets value of a pointer to a char.
 * @s: Pointer to pointer.
 * @to: Character pointer.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
