#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void _putchar(char c);
/**
 * print_alphabet - print lowercase alphabet
 */
void print_alphabet(void);
/**
 *  print_alphabet_x10 - print lowercase aphabet 10x
*/
void print_alphabet_x10(void);
/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: int
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabatic character
 * @c: character to check
 * Return: 1 if lower ir upper, 0 if not alphabet character
 */
int _isalpha(int c);

/**
 * print_sign - print the sign of a number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */
int print_sign(int n);

/**
 * _abs - computes the absolute value of integer
 * @int: integer
 * Return: absolute value
 */
int _abs(int);

/**
 * print_last_digit - print the last digit of a number
 * @int: integer
 * Return: last digit
 */

int print_last_digit(int);

/**
 * jack_bauer - prints every minute of the day of jack bauer
 * Description: print minutes 00:00 to 23:59
 */

void times_table(void);

/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int add(int a, int b);

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n);

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n);

#endif /* MAIN_H */
