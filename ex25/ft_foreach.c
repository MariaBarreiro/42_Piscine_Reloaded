/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 22:20:44 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/05 11:37:35 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*void	ft_putchar(int c);*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>

int	main()
{
	int	tab [] = {'H', 'E', 'L', 'L'};
	int	length = sizeof(tab) / sizeof(tab[0]);
	ft_foreach(tab, length, ft_putchar);
	return (0);
}*/
