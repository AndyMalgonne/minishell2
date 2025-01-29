/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasdere <abasdere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:02:20 by abasdere          #+#    #+#             */
/*   Updated: 2025/01/28 14:08:49 by abasdere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void *free_to_null(void *p) {
	void **ptr;

	ptr = (void **)p;
	if (!ptr || !(*ptr))
		return NULL;
	free(*ptr);
	*ptr = NULL;
	return (*ptr);
}
