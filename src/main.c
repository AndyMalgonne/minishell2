/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasdere <abasdere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:50:52 by andymalgonn       #+#    #+#             */
/*   Updated: 2025/01/27 12:49:13 by abasdere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

int	g_signal = 0;

int	main(int argc, char **argv)
{
	printf("Nombre d'arguments: %d\n", argc);
	if (argc > 0)
		printf("Argument 0: %s\n", argv[0]);
	if (argc > 1)
		printf("Argument 1: %s\n", argv[1]);
	if (argc > 2)
		printf("Argument 2: %s\n", argv[2]);
	return (0);
}
