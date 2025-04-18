/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:25:36 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/01 21:32:15 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main()
{
	int	a = 10;
	int	b = 2;
	int	div; 
	int	mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d %d %d", a, b, div, mod); 
	return(0);
}*/
