/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:40:58 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/14 14:24:46 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int c;
	int n1;
	int n2;

	n1 = 0;
	n2 = 1;
	while (n1 < size)
	{
		n2 = n1 + 1;
		while (n2 < size)
		{
			if (tab[n1] > tab[n2])
			{
				c = tab[n1];
				tab[n1] = tab[n2];
				tab[n2] = c;
			}
			n2++;
		}
		n1++;
	}
}
