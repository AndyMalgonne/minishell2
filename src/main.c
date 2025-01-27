/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasdere <abasdere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:50:52 by andymalgonn       #+#    #+#             */
/*   Updated: 2025/01/27 19:38:53 by abasdere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	g_signal = 0;

int	main(int argc, char **argv __attribute__((unused)), char **envp)
{
	t_env *env	__attribute__((__cleanup__(free_env)));

	env = NULL;
	if (argc != 1)
		return (ft_putstr_fd("Usage: ./minishell\n", 2), 1);
	if (isatty(0) != 1)
		return (ft_putstr_fd("U mad bro?\n", 2), 1);
	if (!create_env(&env, envp))
		return (1);
	return (0);
}
