/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recherche.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:18:41 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/14 10:55:52 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	jsp(int *tab, int n)
{
	int	booleen;
	int	count;

	booleen = 1;
	while (booleen == 1)
	{
		if (tab[0] == (10 - n))
		{
			//affiche_tab(tab);
			booleen = 0;
		}
		else
		{
			verif(n, tab);
			ft_putchar(56);
		}
	}
}
void	verif(int n, int *tab)
{
	int	count;

	count = n;
	tab[n - 1] = tab[n - 1] + 1 ;
	while(count > 0)
	{
		if (tab[count - 1 ] == (10 - (n - count) && tab))
		{
			tab[count - 2] = tab[count - 2] + 1;
			tab[count - 1] = tab[count - 2] + 1;
		}
		ft_putchar(tab[count] + 48);
		count--;
	}
	ft_putchar(tab[count] + 48);
}

void	ft_print_combn(int n)
{
	int	tab[n];
	int	count;

	count = 0;
	while (count < n)
	{
		tab[count]=count;
		ft_putchar(tab[count] + 48);
		count ++;
	}
	jsp(tab ,n);

}
void main(void)
{
	ft_print_combn(2);
}
