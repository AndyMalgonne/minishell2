/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andymalgonne <andymalgonne@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:50:52 by andymalgonn       #+#    #+#             */
/*   Updated: 2025/01/27 09:57:11 by andymalgonn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
