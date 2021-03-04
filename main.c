/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:37:14 by cnavarro          #+#    #+#             */
/*   Updated: 2021/03/04 14:16:08 by cnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(void)
{
	//int		c;
	char	*fraselarga = {"Lorem ipsum dolor sit amet consectetur adipiscing, elit tincidunt tempus ornare ridiculus, elementum vitae sollicitudin curae fames. Eleifend sociis augue nam tincidunt vestibulum sollicitudin fringilla, id fermentum nunc aliquam iaculis mi, cubilia himenaeos proin ligula tellus curae. Porta pulvinar congue litora aptent semper quis proin blandit, ultricies ultrices euismod platea sollicitudin mattis dapibus, per tempor elementum dis curae vel praesent. Tortor diam tempus montes vivamus blandit rutrum tellus, aliquet pretium volutpat dictum malesuada habitasse nostra, tempor feugiat ut sagittis cursus fames. Est mattis convallis massa hac pellentesque egestas himenaeos phasellus viverra sagittis ac, lacus justo tristique felis cum purus molestie semper pharetra ridiculus, ligula class quam erat vestibulum scelerisque tempus ornare nibh gravida. Nisi cubilia auctor non malesuada urna ad eros a sapien, dignissim per parturient eleifend libero ultricies penatibus."};
	char	*frasevacia = {""};
	char	*frase1 = {"Hola"};
	char	*frase2 = {"Adios"};
	char	destinoft[5];
	char	destino[5];

   //STRLEN-------------------------------------------------------------
	printf(ANSI_COLOR_CYAN "----FT_STRLEN---- \n\n" ANSI_COLOR_RESET);
	printf(" la cadena es: '%s'\n\n", frase1);
	printf("   ft_strlen: %lu\n", ft_strlen(frase1));
	printf("      strlen: %lu\n", strlen(frase1));
	if (ft_strlen(frase1) == strlen(frase1))
		printf(ANSI_COLOR_GREEN "\n    CORRECTO :D\n\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "¡¡INCORRECTO!! D:\n\n" ANSI_COLOR_RESET);
	
	printf("\n la cadena es: '%s'\n\n", frasevacia);
	printf(" \n");
	printf("   ft_strlen: %lu\n", ft_strlen(frasevacia));
	printf("      strlen: %lu\n", strlen(frasevacia));
	if (ft_strlen(frasevacia) == strlen(frasevacia))
		printf(ANSI_COLOR_GREEN "\n    CORRECTO :D\n\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "¡¡INCORRECTO!! D:\n\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_CYAN "-----------------\n" ANSI_COLOR_RESET);

	printf("\n la cadena es: '%s'\n\n", fraselarga);
	printf(" \n");
	printf("   ft_strlen: %lu\n", ft_strlen(fraselarga));
	printf("      strlen: %lu\n", strlen(fraselarga));
	if (ft_strlen(fraselarga) == strlen(fraselarga))
		printf(ANSI_COLOR_GREEN "\n    CORRECTO :D\n\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "¡¡INCORRECTO!! D:\n\n" ANSI_COLOR_RESET);

	//STRCPY--------------------------------------------------------------
	printf(ANSI_COLOR_CYAN "----FT_STRCPY---\n" ANSI_COLOR_RESET);
	printf(" la cadena es: '%s'\n\n", frase1);
	printf("   ft_strcpy: %s\n", ft_strcpy(destinoft, frase1));
	printf("      strcpy: %s\n", strcpy(destino, frase1));

	if (!(strcmp(destinoft, destino)))
		printf(ANSI_COLOR_GREEN "\n    CORRECTO :D\n\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "¡¡INCORRECTO!! D:\n\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_CYAN "-----------------\n" ANSI_COLOR_RESET);

	char destinovacioft[1];
	char destinovacio[1];

	printf(" la cadena es: '%s'\n\n", frasevacia);
	printf("   ft_strcpy: %s\n", ft_strcpy(destinovacioft, frasevacia));
	printf("      strcpy: %s\n", strcpy(destinovacio, frasevacia));

	if (!(strcmp(destinovacioft, destinovacio)))
		printf(ANSI_COLOR_GREEN "\n    CORRECTO :D\n\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "¡¡INCORRECTO!! D:\n\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_CYAN "-----------------\n" ANSI_COLOR_RESET);

	char destinograndeft[976];
	char destinogrande[976];

	printf(" la cadena es: '%s'\n\n", fraselarga);
	printf("   ft_strcpy: %s\n\n", ft_strcpy(destinograndeft, fraselarga));
	printf("      strcpy: %s\n", strcpy(destinogrande, fraselarga));

	if (!(strcmp(destinograndeft, destinogrande)))
		printf(ANSI_COLOR_GREEN "\n    CORRECTO :D\n\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "¡¡INCORRECTO!! D:\n\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_CYAN "-----------------\n" ANSI_COLOR_RESET);
	
	//STRCMP-------------------------------------------------------------
	printf(ANSI_COLOR_CYAN "----FT_STRCMP---\n" ANSI_COLOR_RESET);
	printf(" las cadenas son: '%s' y '%s'\n\n", frase1, frase2);
	printf("   ft_strcmp: %d\n", ft_strcmp(frase1, frase2));
	printf("      strcmp: %d\n", strcmp(frase1, frase2));
	

	if (ft_strcmp(frase1, frase2) == strcmp(frase1, frase2))
		printf(ANSI_COLOR_GREEN "\n    CORRECTO :D\n\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "¡¡INCORRECTO!! D:\n\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_CYAN "-----------------\n" ANSI_COLOR_RESET);

	printf(" las cadenas son: '%s' y '%s'\n\n", frase1, frase1);
	printf("   ft_strcmp: %d\n", ft_strcmp(frase1, frase1));
	printf("      strcmp: %d\n", strcmp(frase1, frase1));

	if (ft_strcmp(frase1, frase1) == strcmp(frase1, frase1))
		printf(ANSI_COLOR_GREEN "\n    CORRECTO :D\n\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "¡¡INCORRECTO!! D:\n\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_CYAN "-----------------\n" ANSI_COLOR_RESET);


	printf(" las cadenas son: '%s' y '%s'\n\n", frasevacia, frase1);
	printf("   ft_strcmp: %d\n", ft_strcmp(frasevacia, frase1));
	printf("      strcmp: %d\n", strcmp(frasevacia, frase1));
	
	if (ft_strcmp(frasevacia, frase1) == strcmp(frasevacia, frase1))
		printf(ANSI_COLOR_GREEN "\n    CORRECTO :D\n\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "¡¡INCORRECTO!! D:\n\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_CYAN "-----------------\n" ANSI_COLOR_RESET);


	printf(" las cadenas son: '%s' y '%s'\n\n", frasevacia, frasevacia);
	printf("   ft_strcmp: %d\n", ft_strcmp(frasevacia, frasevacia));
	printf("      strcmp: %d\n", strcmp(frasevacia, frasevacia));

	
	if (ft_strcmp(frasevacia, frasevacia) == strcmp(frasevacia, frasevacia))
		printf(ANSI_COLOR_GREEN "\n    CORRECTO :D\n\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "¡¡INCORRECTO!! D:\n\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_CYAN "-----------------\n" ANSI_COLOR_RESET);

	//STRDUP-------------------------------------------------------------

	char *sinmemoriaft;
	char *sinmemoria;

	printf(ANSI_COLOR_CYAN "----FT_STRDUP---\n" ANSI_COLOR_RESET);
	printf("la cadena es:'%s'\n\n", frase1);
	printf("   ft_strdup: %s\n", sinmemoriaft = ft_strdup(frase1));
	printf("      strdup: %s\n", sinmemoria = strdup(frase1));
	
	if (!(strcmp(sinmemoriaft, sinmemoria)))
		printf(ANSI_COLOR_GREEN "\n    CORRECTO :D\n\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "¡¡INCORRECTO!! D:\n\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_CYAN "-----------------\n" ANSI_COLOR_RESET);

	free(sinmemoriaft);
	sinmemoriaft = "pepe";
	free(sinmemoria);
	sinmemoria = "pepa";

	printf("la cadena es:'%s'\n\n", frasevacia);
	printf("   ft_strdup2: %s\n", sinmemoriaft = ft_strdup(frasevacia));
	printf("      strdup2: %s\n", sinmemoria = strdup(frasevacia));
	
	if (!(strcmp(sinmemoriaft, sinmemoria)))
		printf(ANSI_COLOR_GREEN "\n    CORRECTO :D\n\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "¡¡INCORRECTO!! D:\n\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_CYAN "-----------------\n" ANSI_COLOR_RESET);

	return (0);
}
