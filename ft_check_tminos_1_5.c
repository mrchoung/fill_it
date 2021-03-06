/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tminos_1_5.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 19:29:53 by mfranc            #+#    #+#             */
/*   Updated: 2016/12/09 14:42:42 by ajehanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_tminos1(char *str, int i, int max)
{
	if (i + 1 > max || i + 5 > max || i + 6 > max)
		return (0);
	if (str[i + 1] != '#' || str[i + 5] != '#' || str[i + 6] != '#')
		return (0);
	return (1);
}

int		ft_check_tminos2(char *str, int i, int max)
{
	if (i + 5 > max || i + 10 > max || i + 15 > max)
		return (0);
	if (str[i + 5] != '#' || str[i + 10] != '#' || str[i + 15] != '#')
		return (0);
	return (2);
}

int		ft_check_tminos3(char *str, int i, int max)
{
	if (i + 1 > max || i + 2 > max || i + 3 > max)
		return (0);
	if (str[i + 1] != '#' || str[i + 2] != '#' || str[i + 3] != '#')
		return (0);
	return (3);
}

int		ft_check_tminos4(char *str, int i, int max)
{
	if (i + 1 > max || i + 6 > max || i + 11 > max)
		return (0);
	if (str[i + 1] != '#' || str[i + 6] != '#' || str[i + 11] != '#')
		return (0);
	return (4);
}

int		ft_check_tminos5(char *str, int i, int max)
{
	if (i + 1 > max || i + 5 > max || i + 10 > max)
		return (0);
	if (str[i + 1] != '#' || str[i + 5] != '#' || str[i + 10] != '#')
		return (0);
	return (5);
}
