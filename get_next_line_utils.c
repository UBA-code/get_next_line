#include "get_next_line.h"

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void ft_strncpy(char *s1, char *s2, int j)
{
  int i;

  i = 0;
  while (i < j)
  {
    s1[i] = s2[i];
    i++;
  }
  s1[i] = '\0';
}