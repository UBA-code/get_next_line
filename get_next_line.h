#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include<fcntl.h>

#define BUFER_SIZE 4096
int get_next_line(int fd, char **line);
void  ft_strncpy(char *s1, char *s2, int j);

#endif