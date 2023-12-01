#ifndef DAY1_H
# define DAY1_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

//get_next_line
char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *toret);
void	ft_cleanbuffer(char *buffer);
char	*ft_treat_line(char *toret, int bytesread);
int		ft_is_empty(char *buffer);
//get_next_line_utils
int		ft_hasnl(char *str);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *buffer, char *pstr);
char	*ft_buffer_to_str(char *buffer, int bytesread);

#endif