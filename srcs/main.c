/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:37:14 by cnavarro          #+#    #+#             */
/*   Updated: 2021/02/25 13:27:20 by cnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int		c;
	char	*frase;
	frase = malloc(sizeof(char) * 5);
	frase[0] = 'H';
	frase[1] = 'o';
	frase[2] = 'l';
	frase[3] = 'a';
	frase[4] = '\0';

	c = ft_strlen(frase);
	printf("%d", c);
	return (0);
}
