/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasdere <abasdere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:51:13 by andymalgonn       #+#    #+#             */
/*   Updated: 2025/01/29 09:54:53 by abasdere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft.h"
# include <curses.h>
# include <dirent.h>
# include <errno.h>
# include <fcntl.h>
# include <limits.h>
# include <readline/history.h>
# include <readline/readline.h>
# include <signal.h>
# include <sys/ioctl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <termios.h>
# include <stdio.h>
# include <stdlib.h>

# define PROMPT "> "
# define ERR_MALLOC "Malloc error"

typedef enum e_iotype
{
	INFILE,
	HEREDOC,
	OUTFILE_TRUNC,
	OUTFILE_APPEND,
}					t_iotype;

typedef struct s_env
{
	char			*value;
	struct s_env	*next;
}					t_env;

typedef struct s_iofile
{
	t_iotype		type;
	char			*value;
	struct s_iofile	*next;
}					t_iofile;

typedef struct s_tree
{
	char			*cmd;
	t_iofile		*io;
	struct s_tree	*next;
}					t_tree;

extern int			g_signal;

void	*free_to_null(void *p);
int		get_input(char **user_input);
void	cleanup_user_input(char **user_input);

#endif
