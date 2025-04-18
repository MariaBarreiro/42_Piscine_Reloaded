/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 08:07:08 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/02 08:11:20 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	char *s1 = "abc";
	char *s2 = "abd";
	printf("%d", ft_strcmp(s1, s2));
	return 0;
}*/
