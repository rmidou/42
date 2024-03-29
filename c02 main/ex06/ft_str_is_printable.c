/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:25:44 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/15 10:17:36 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	booleen;
	int	i;

	i = 0;
	booleen = 1;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			booleen = 0;
		i++;
	}
	return (booleen);
}
