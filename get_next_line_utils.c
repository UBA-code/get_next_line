#include "get_next_line.h"

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void ft_strncpy(char *dest, char *src, int j)
{
  int i;

  i = 0;
  while (i < j)
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
}