/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 19:43:13 by lgervet           #+#    #+#             */
/*   Updated: 2025/11/15 14:59:49 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_game
{
	int		width;
	int		height;
	char	*cells;
}	t_game;

typedef struct s_vec2
{
	int	x;
	int	y;
}	t_vec2;

typedef struct s_snake
{
	t_vec2	*segments;
	int		length;
	int		capacity;
	int		dir_x;
	int		dir_y;
}	t_snake;

int		init_game(t_game *game, int width, int height);
void	set_cell(t_game *game, int x, int y, char c);
char	get_cell(const t_game *game, int x, int y);
void	destroy_game(t_game *game);
void	render(t_game *game);

#endif