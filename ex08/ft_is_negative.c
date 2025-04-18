/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:00:51 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/01 21:06:28 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	c;

	if (n < 0)
	{
		c = 'N';
		ft_putchar(c);
	}
	else
	{
		c = 'P';
		ft_putchar(c);
	}
}
/*
int	main()
{
	int	i;

	i = -1;
	ft_is_negative(i);
	return (0);
}*/
