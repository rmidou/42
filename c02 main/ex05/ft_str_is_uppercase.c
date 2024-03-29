/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:23:21 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/15 09:27:52 by nbiron           ###   ########.fr       */
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
		if (str[i] < 65 || str[i] > 90)
			booleen = 0;
		i++;
	}
	return (booleen);
}
