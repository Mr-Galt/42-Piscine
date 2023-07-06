/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:17:37 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/22 18:42:38 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{	
		range = NULL;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * (max - min));
	if (!range)
	{	
		return (-1);
	}
	while (min < max)
	{	
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*
int main(void)
{
	int *array;
	int min;
	int max;

	min = 1;
	max = 21;

	printf("Your range is: %d", ft_ultimate_range(&array, min, max));
}
*/
