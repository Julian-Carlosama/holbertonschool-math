#include "holberton.h"

/**
 * display_complex_number - Function that show complex numbers
 *
 * @complex: Get the structure.
 *
 * @c: imaginary numbers.
 *
 */

void display_complex_number(complex c)
{
	if (c.re == 0 && c.im == 0)
		return (0);
	else if (c.re != 0 && c.im != 0)
		printf("%0.f + %0.f", c.re, c.im);
}
