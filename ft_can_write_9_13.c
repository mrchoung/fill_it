/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_write_9_13.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 12:40:41 by ajehanno          #+#    #+#             */
/*   Updated: 2016/12/08 19:20:16 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_can_write9(int o, int x, int y, t_place *p)
{
	if (y + 1 >= p->max || y + 2 >= p->max || x + 1 >= p->max)
		return (0);
	if (p->tab[y + 1][x] != '.'
	|| p->tab[y + 2][x] != '.'
	|| p->tab[y + 2][x + 1] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y + 1][x] = 'A' + o;
	p->tab[y + 2][x] = 'A' + o;
	p->tab[y + 2][x + 1] = 'A' + o;
	return (1);
}

int	ft_can_write10(int o, int x, int y, t_place *p)
{
	if (y + 1 >= p->max || x + 1 >= p->max || x + 2 >= p->max)
		return (0);
	if (p->tab[y + 1][x] != '.'
	|| p->tab[y][x + 1] != '.'
	|| p->tab[y][x + 2] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y + 1][x] = 'A' + o;
	p->tab[y][x + 1] = 'A' + o;
	p->tab[y][x + 2] = 'A' + o;
	return (1);
}

int	ft_can_write11(int o, int x, int y, t_place *p)
{
	if (y + 1 >= p->max || x + 1 >= p->max || x + 2 >= p->max)
		return (0);
	if (p->tab[y + 1][x] != '.'
	|| p->tab[y + 1][x + 1] != '.'
	|| p->tab[y + 1][x + 2] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y + 1][x] = 'A' + o;
	p->tab[y + 1][x + 1] = 'A' + o;
	p->tab[y + 1][x + 2] = 'A' + o;
	return (1);
}

int	ft_can_write12(int o, int x, int y, t_place *p)
{
	if (x + 1 >= p->max || y + 1 >= p->max || x + 2 >= p->max)
		return (0);
	if (p->tab[y][x + 1] != '.'
	|| p->tab[y + 1][x + 1] != '.'
	|| p->tab[y + 1][x + 2] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y][x + 1] = 'A' + o;
	p->tab[y + 1][x + 1] = 'A' + o;
	p->tab[y + 1][x + 2] = 'A' + o;
	return (1);
}

int	ft_can_write13(int o, int x, int y, t_place *p)
{
	if (y + 1 >= p->max || y + 2 >= p->max || x - 1 < 0)
		return (0);
	if (p->tab[y + 1][x] != '.'
	|| p->tab[y + 1][x - 1] != '.'
	|| p->tab[y + 2][x - 1] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y + 1][x] = 'A' + o;
	p->tab[y + 1][x - 1] = 'A' + o;
	p->tab[y + 2][x - 1] = 'A' + o;
	return (1);
}
