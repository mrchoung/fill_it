#include "fillit.h"

int		ft_check_tminos11(char *str, int i)
{
	if (str[i + 5] != '#' || str[i + 6] != '#' || str[i + 7] != '#')
		return (0);
	return (11);
}

int		ft_check_tminos12(char *str, int i)
{
	if (str[i + 1] != '#' || str[i + 6] != '#' || str[i + 7] != '#')
		return (0);
	return (12);
}

int		ft_check_tminos13(char *str, int i)
{
	if (str[i + 5] != '#' || str[i + 4] != '#' || str[i + 9] != '#')
		return (0);
	return (13);
}

int		ft_check_tminos14(char *str, int i)
{
	if (str[i + 1] != '#' || str[i + 5] != '#' || str[i + 4] != '#')
		return (0);
	return (14);
}

int		ft_check_tminos15(char *str, int i)
{
	if (str[i + 5] != '#' || str[i + 6] != '#' || str[i + 11] != '#')
		return (0);
	return (15);
}
