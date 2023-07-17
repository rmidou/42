/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_lowercase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:14:44 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/15 09:29:27 by nbiron           ###   ########.fr       */
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
		if (str[i] < 97 || str[i] > 122)
			booleen = 0;
		i++;
	}
	return (booleen);
}
