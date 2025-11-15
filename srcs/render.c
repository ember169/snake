/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 19:43:59 by lgervet           #+#    #+#             */
/*   Updated: 2025/11/15 13:25:17 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	init_game(t_game *game, int width, int height)
{
	int	x;
	int	y;

	game->width = width;
	game->height = height;
	game->cells = malloc((width * height) * sizeof(char));
	if (!(game->cells))
		return (0);
	x = 0;
	y = 0;
	while (y < height)
	{
		x = 0;
		while (x < width)
		{
			set_cell(game, x, y, ' ');
			x++;
		}
		y++;
	}
	return (1);
}

void	destroy_game(t_game *game)
{
	if (!game->cells)
		return ;
	free(game->cells);
	game->cells = NULL;
}

char	get_cell(const t_game *game, int x, int y)
{
	int	index;

	if (x < 0 || x >= game->width || y < 0 || y >= game->height)
		return (' ');
	index = y * game->width + x;
	return (game->cells[index]);
}

void	set_cell(t_game *game, int x, int y, char c)
{
	int	index;

	if (x < 0 || x >= game->width || y < 0 || y >= game->height)
		return ;
	index = y * game->width + x;
	game->cells[index] = c;
}

void	render(t_game *game)
{
	int		x;
	int		y;
	char	c;

	if (!game)
		return ;
	y = 0;
	while (y < game->height + 1)
	{
		x = 0;
		while (x < game->width)
		{
			c = get_cell(game, x, y);
			write(1, &c, 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}
