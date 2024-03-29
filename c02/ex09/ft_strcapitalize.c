/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:34:07 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/15 15:01:29 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*uppercase(char *str, int *i)
{
	if (str[*i] >= 97 && str[*i] <= 122)
	{
		if ((str[*i - 1] > 31 && str[*i - 1] < 48)
			|| (str[*i - 1] > 57 && str[*i -1] < 65))
		{
			str[*i] -= 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = (str[i] - 32);
	}
	i++;
	while (str[i] != '\0')
	{
		uppercase(str, &i);
		if (str[i] >= 65 && str[i] <= 90)
		{
			if ((str[i - 1] > 47 && str[i - 1] < 58)
				|| (str[i - 1] > 64 && str[i - 1] < 91)
				|| (str[i - 1] > 96 && str[i - 1] < 123))
			{
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
