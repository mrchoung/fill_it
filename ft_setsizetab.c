/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setsizetab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:22:34 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/29 17:59:28 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_set_size_tab(int nb_map)
{
	if (nb_map == 1 || nb_map == 2 || nb_map == 3)
		return (nb_map + 1);
	else if (nb_map == 4)
		return (4);
	else if  (nb_map == 5 || nb_map == 6)
		return (5);
	else if (nb_map == 7 || nb_map == 8 || nb_map == 9)
		return (6);
	return (0);
}