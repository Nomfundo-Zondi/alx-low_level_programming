#include <unistd.h>
#include "_putchar.h"
/**
 * main -check description
 * Description - print the word _putchar, followed by a new line
 * Return: 0
 */
int main(void)
{
  char letter[8] = "_putchar";
  int i;

  for (i = 0; i < 8; i++)
    _putchar(letter[i]);
  _putchar('\n');

  return (0);
}
