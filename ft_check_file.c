/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:51:12 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/28 15:31:48 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_column(char *str, int *i)
{
	int j;

	j = 0;
	while (str[*i] && j < 4)
	{
		if (str[*i] != '.' && str[*i] != '#')
			return (0);
		*i = *i + 1;
		j++;
	}
	return (1);
}

int		ft_check_file(char *str)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (str[i])
	{
		o = 0;
		while (o < 4)
		{
			if (ft_check_column(str, &i) == 0)
				return (0);
			if (str[i] != '\n')
				return (0);
			o++;
			i++;
		}
		i++;
	}
	if (str[i - 1] == '\n' && str[i - 2] == '\n')
		return (0);
	return (1);
}
