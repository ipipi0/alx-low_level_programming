#include <stdio.h>
/**
 * main - A project that print the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
char q;
int w;
long int e;
long long int r;
float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)
sizeof(q));
printf("Size of int: %lu byte(s)\n", (unsigned long)
sizeof(w));
printf("Size of long int: %lu byte(s)\n", (unsigned long)
sizeof(e));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)
sizeof(r));
printf("Size of float: %lu byte(s)\n", (unsigned long)
sizeof(f));
return (0);
}
