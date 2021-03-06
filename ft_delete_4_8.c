/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_4_8.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 12:41:27 by ajehanno          #+#    #+#             */
/*   Updated: 2016/12/08 12:41:29 by ajehanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_delete4(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y + 1][x + 1] = '.';
	p->tab[y + 2][x + 1] = '.';
}

void	ft_delete5(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 2][x] = '.';
}

void	ft_delete6(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 1][x - 1] = '.';
	p->tab[y + 1][x - 2] = '.';
}

void	ft_delete7(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y][x + 2] = '.';
	p->tab[y + 1][x + 2] = '.';
}

void	ft_delete8(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 2][x] = '.';
	p->tab[y + 2][x - 1] = '.';
}
