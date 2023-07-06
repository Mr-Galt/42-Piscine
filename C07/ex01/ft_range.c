/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:53:45 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/22 18:46:26 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (NULL);
	array = (int *) malloc(sizeof(int) * (max - min));
	if (!array)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	min = atoi(argv[1]);
		int	max = atoi(argv[2]);
	
		printf("You gave the min int of %d and the max int of %d\n", min, max);
		printf("Here's your result: \n\n");
		
		int *result = ft_range(min, max);
		int i =0;
		
		while (i < (max - min))
		{
			printf("%d ", result[i]);
			i++;
		}
	}
}
*/
