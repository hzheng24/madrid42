/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 14:24:47 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/14 18:32:55 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
