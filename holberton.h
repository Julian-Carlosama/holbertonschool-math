#ifndef
#define _HOLBERTON_H_

/** Here are the libraries for neccesaries
 * for this procject.
 */
#include <stdio.h>

/**
 * Complex - Struct of complex numbers.
 *
 * @re: Is the real number.
 *
 * @im: Is the imaginary number.
 *
 */
typedef struct complex
{
	double re;
	double im;
}math_complex;

/**Prototypes for this procject*/
void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);

#endif
