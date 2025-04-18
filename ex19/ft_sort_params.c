/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 08:24:09 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/02 20:23:38 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*temp;

	if (ac > 1)
	{
		i = 1;
		while (av[i])
		{
			j = i + 1;
			while (av[j])
			{
				if (ft_strcmp(av[i], av[j]) > 0)
				{
					temp = av[i];
					av[i] = av[j];
					av[j] = temp;
				}
				j++;
			}
			ft_putstr(av[i]);
			i++;
		}
	}
	return (0);
}
