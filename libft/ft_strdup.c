/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:46:48 by cnavarro          #+#    #+#             */
/*   Updated: 2021/02/11 11:34:08 by cnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*n;
	int		i;
	int		tam;

	tam = 0;
	while (src[tam])
		tam++;
	if (!(n = malloc(sizeof(char) * (tam + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		n[i] = src[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
