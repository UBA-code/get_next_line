#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
  static int counter = 0;
  static int i = 0;
  static int j = 0;
  char txt[BUFER_SIZE];

  // check if read success or not
  if (read(fd, txt, BUFER_SIZE) == -1)
    return (-1);

  // loop on txt for the file
  while (txt[i])
  {
    if (txt[i] == 10)
    {
        // allocate space in line array
        if ((line[counter] = malloc(i - j)) == NULL)
          return (-1);
        // copy characters from txt to line
        ft_strncpy(line[counter++], txt + j, i - j);
        j = ++i;
        return (1); // not sure about this
    }
    i++;
  }
  // if End Of File Reached

  if ((line[counter] = malloc(i - j)) == NULL)
          return (-1);
  ft_strncpy(line[counter++], txt + j, i - j);
  return 0;
}
/*
int main()
{
  int fd = open("test", O_RDONLY);
  char *lines[2];
  //lines[4] = '\0';
  int i = 0;
  while (i < 3)
  {
    printf("%d\n", get_next_line(fd, lines));
    i++;
  }
  printf("%s\n", lines[0]);
  printf("%s\n", lines[1]);
  printf("%s\n", lines[2]);

  return 0;
}
*/