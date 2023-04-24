#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the base in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int b;
  char bow;

  for (b = '0'; b <= '9'; b++)
    puchar(b);
  for (bow = 'a'; bow <= 'f'; bow++)
    putchar(bow);
  putchar("\n");

  return (0);
}
