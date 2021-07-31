#include "holberton.h"

/**
 * conjugate - Function that returns the conjugate
 *
 * @complex: Get the structure.
 *
 * @c: imaginary numbers.
 *
 */

complex conjugate(complex c)
{
	complex cong;
	cong += c.re;
	cong += c.im;
	
	return (cong);
}
