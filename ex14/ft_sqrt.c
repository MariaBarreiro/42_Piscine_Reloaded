/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:47:48 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/01 21:48:09 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		if (i > 46340)
			return (0);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	int	a = ft_sqrt(36);
	printf("%d", a);
	return(0);
}*/
