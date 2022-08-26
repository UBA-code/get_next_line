#include "get_next_line.h"

static int counter = 0;

int get_next_line(int fd, char **line)
{
  int i;
  int j;
  char file_content[BUFER_SIZE];
  int rd_buff;
  int x;

  if ((rd_buff = read(fd, file_content, BUFER_SIZE)) == -1)
    return (-1);
  file_content[rd_buff] = '\0';
  j = 0;
  i = 0;
  x = 0;
  while (file_content[i])
  {
    if (file_content[i] == 10)
    {
      line[x] = malloc(i - j + 1);
      ft_strncpy(line[x++], file_content + j, i - j);
      j = i;
      j++;
    }
    i++;
  }
  line[x] = '\0';
  return 1;
}
/*
int main ()
{
  int file = open("test", O_RDONLY);
  int i = 0;
  char *table[10];
  get_next_line(file, table);
  while (table[i])
  {
    printf("%s\n", table[i]);
    i++;
  }
  return 0;
}
*/