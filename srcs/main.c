/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:37:14 by cnavarro          #+#    #+#             */
/*   Updated: 2021/02/23 12:55:48 by cnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int		c;
	char	*frase = {"Hola, que tal"};

	c = ft_strlen(frase);
	printf("%d", c);
	return (0);
}
