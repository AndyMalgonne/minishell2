/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasdere <abasdere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:27:14 by abasdere          #+#    #+#             */
/*   Updated: 2025/01/27 19:45:41 by abasdere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	create_env(t_env **env, char **envp)
{
	t_env	**head;
	t_env	*new_node;
	size_t	i;

	i = -1;
	head = env;
	while (envp[++i])
	{
		new_node = ft_calloc(1, sizeof(t_env));
		if (new_node == NULL)
			return (ft_putstr_fd(ERR_MALLOC, 2), 0);
		new_node->value = envp[i];
		new_node->next = NULL;
		*head = new_node;
		head = &new_node->next;
	}
	return (1);
}

void	free_env(t_env **env)
{
	if (!env || !(*env))
		return ;
	if ((*env)->next)
		free_env(&(*env)->next);
	free(*env);
}
