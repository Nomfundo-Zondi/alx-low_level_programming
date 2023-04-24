#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print numbers starting from 0
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
  int b;

  for (b = '0'; b <= '9'; b++)
    putchar(b);
  putchar('\n');

  return (0);
}
