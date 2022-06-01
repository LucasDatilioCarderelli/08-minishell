/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_exit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:09:36 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/31 23:53:55 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mini_shell.h"

void	msh_exit(void)
{
	ft_dlstclear(&g_msh.envp_lst, &free);
	free_cmds(g_msh.splitted_cmds);
	free(g_msh.prompt);
	exit(0);
}
