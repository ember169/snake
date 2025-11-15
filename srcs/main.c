/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 19:57:55 by lgervet           #+#    #+#             */
/*   Updated: 2025/11/15 14:39:01 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{
	t_game	game;

	if (!init_game(&game, 30, 20))
	{
		write(1, "Init game failed.\n", 18);
		return (1);
	}
	
	render(&game);
	destroy_game(&game);
	return (0);
}
