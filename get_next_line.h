#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include<fcntl.h>

int get_next_line(int fd, char **line);
void  ft_strncpy(char *dest, char *src, int j);

#endif