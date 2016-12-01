#include "fillit.h"

int	ft_can_write14(int o, t_place *****p)
{
	if (p->tab[p->y][p->x + 1] != '.' 
			|| cp->tab[p->y - 1][p->x] != '.' 
			|| cp->tab[p->y - 1][p->x - 1] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y][p->x + 1] = 'A' + o;
	p->tab[p->y - 1][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x - 1] = 'A' + o;
	return (1);
}

int	ft_can_write15(int o, t_place *****p)
{
	if (p->tab[p->y - 1][p->x] != '.' 
			|| p->tab[p->y - 1][p->x + 1] != '.' 
			|| p->tab[p->y - 2][p->x + 1] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x + 1] = 'A' + o;
	p->tab[p->y - 2][p->x + 1] = 'A' + o;
	return (1);
}

int	ft_can_write16(int o, t_place *****p)
{
	if (cp->tab[p->y][p->x + 1] != '.' 
			|| p->tab[p->y - 1][p->x + 1] != '.' 
			|| p->tab[p->y][p->x + 2] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y][p->x + 1] = 'A' + o;
	p->tab[p->y - 1][p->x + 1] = 'A' + o;
	p->tab[p->y][p->x + 2] = 'A' + o;
	return (1);
}

int	ft_can_write17(int o, t_place *****p)
{
	if (cp->tab[p->y - 1][p->x] != '.' 
			|| p->tab[p->y - 1][p->x - 1] != '.' 
			|| p->tab[p->y - 2][p->x] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x - 1] = 'A' + o;
	p->tab[p->y - 2][p->x] = 'A' + o;
	return (1);
}

int	ft_can_write18(int o, t_place *****p)
{
	if (cp->tab[p->y - 1][p->x] != '.' 
			|| p->tab[p->y - 1][p->x - 1] != '.' 
			|| p->tab[p->y - 1][p->x + 1] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x - 1] = 'A' + o;
	p->tab[p->y - 1][p->x + 1] = 'A' + o;
	return (1);
}
