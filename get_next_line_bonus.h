/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:54:49 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/12/18 18:22:47 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* Libs for 'open' */
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

/* For OPEN_MAX */
# include <limits.h>

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char		*fd_last_line(char *temp);
char		*fd_read(int fd, char *temp_line);
char		*get_next_line(int fd);
char		*ft_strjoin_gnl(char const *s1, char const *s2);
size_t		ft_strlen(const char *str);
char		*ft_strchr(const char *s, int c);
void		*ft_calloc(size_t nmemb, size_t size);
void		*ft_memset(void *s, int c, size_t n);

#endif
