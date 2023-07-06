/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:39:52 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/21 15:44:04 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	compare(char *str1, char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	sorter(char **array, int n)
{
	int	i;
	int	j;
	int	sorted_flag;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		sorted_flag = 1;
		while (j < n - i - 1)
		{
			if (compare(array[j], array[j + 1]) > 0)
			{
				swap(&array[j], & array[j + 1]);
				sorted_flag = 0;
			}
			j++;
		}
		if (sorted_flag)
			break ;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	argc--;
	i = 0;
	sorter(argv + 1, argc);
	while (i <= argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
