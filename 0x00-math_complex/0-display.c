#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - Function that show
 * complex numbers
 *
 * @c: imaginary numbers.
 *
 * Return: No return.
 */

void display_complex_number(complex c)
{
	if (c.re == 0 && c.im == 0)
		return;
	else if (c.re != 0 && c.im != 0)
	{
		if (c.re > 0 && c.im > 0)
		{
			if (c.im == 1)
				printf("%0.f + i\n", c.re);
			else
				printf("%0.f + %0.fi\n", c.re, c.im);
		}
		else if (c.re > 0 && c.im < 0)
			if (c.im == -1)
				printf("%0.f - i\n", c.re);
			else
				printf("%0.f - %0.fi\n", c.re, (-1) * c.im);
		else if (c.re < 0 && c.im > 0)
			printf("-%0.f + %0.fi\n", (-1) *  c.re, c.im);
		else if (c.re < 0 && c.im < 0)
			printf("-%0.f - %0.fi\n", (-1) * c.re,  (-1) * c.im);
	}
	else if (c.re == 0 || c.im == 0)
	{
		if (c.re > 0)
			printf("%0.f\n", c.re);
		else if (c.im > 0)
			printf("%0.fi\n", c.im);
		else if (c.im < 0)
			printf("%0.fi\n", c.im);
		else if (c.re < 0)
			printf("%0.f\n", c.re);
	}
}
