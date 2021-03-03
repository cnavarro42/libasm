/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:55:04 by cnavarro          #+#    #+#             */
/*   Updated: 2021/03/03 13:49:13 by cnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stddef.h>

int				ft_strlen(const char *str);
char			*ft_strcpy(char *dest, char *src);
int				ft_strcmp(char *str1, char *str2);
char			*ft_strdup(char *str1, char *str2);
ssize_t			ft_read(int fd, void *buf, size_t bytes);
ssize_t			ft_write(int fd, const void *buf, size_t bytes);

#endif
