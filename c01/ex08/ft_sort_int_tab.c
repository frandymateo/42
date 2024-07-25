/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmateo-f <fmateo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:32:23 by fmateo-f          #+#    #+#             */
/*   Updated: 2024/07/22 17:26:18 by fmateo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[1] > tab[i +1])
			{
				temp = tab[1];
				tab[i] = tab[i +1];
				tab[i +1] = temp;
			}
		}
		size--;
	}
}
