/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 19:43:59 by lgervet           #+#    #+#             */
/*   Updated: 2025/11/14 21:14:47 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	init_game(t_game *game, int width, int height)
{
	game->width = width;
	game->height = height;
}

void	render(const t_game *game)
{
	int	x;
	int	y;

	y = 0;
	write(1, "##############################", 1);
	while (y < game->height - 1)
	{
		x = 0;
		write(1, "#", 1);
		while (x++ < game->width - 1)
			write(1, " ", 1);	
		write(1, "#", 1);
		y++;
	}
	write(1, "##############################", 1);
}
