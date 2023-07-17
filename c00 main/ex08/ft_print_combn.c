/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:29:10 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/13 12:05:08 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_display(int nb)
{
        int     remain;
        int     tab[7];
        int     counter;

        remain = nb;
        counter = 0;
        while (remain >= 10)
        {
                tab[counter] = ((remain % 10) + 48);
                remain = remain / 10;
                counter++;
        }
        if (remain > 0)
                ft_putchar (48 + remain);
	else if (remain == 0)
                ft_putchar(48);
        while ((counter) >= 0)
        {
                ft_putchar(tab[counter - 1]);
                counter--;
        }
}


int	ft_morenb(int nb_depart, int other)
{
	int	i;

	i = nb_depart;
	while (i < 9)
	{
		ft_display(other);
		ft_display(nb_depart);
		ft_putchar((i+1) + 48);
		ft_putchar(32);
		i++;
	}
	return other+1;
}
void	main(void)
{
	int	i;
	int	a;
	int	c;
	int	n;

	a = 0;
	i = a + 1;
	c = 0;
	n = 3;
	while (c < 10-n)
	{

		i = 0;
		while (i < 9)
		{
			a=ft_morenb(i,a);
			i++;
		}
		c++;
	}

}
