/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:10:15 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/22 18:41:34 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_len_calc(char **strs, char *seperator, int size)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (seperator[i])
		i++;
	total_len += i * (size);
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joint_str;
	int		i;
	int		needed_memory;

	if (size == 0)
		return (malloc(sizeof(char) * 1));
	needed_memory = total_len_calc(strs, sep, size) + 1;
	joint_str = (char *) malloc(sizeof(char) * needed_memory);
	if (joint_str == NULL)
		return (NULL);
	joint_str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(joint_str, strs[i]);
		if (i != (size -1))
			ft_strcat(joint_str, sep);
		i++;
	}
	return (joint_str);
}

/*
int	main(void)
{
	char *multi_array[] = {"Ich", "bin", "ein", "Berliner!"};
	char seperator[] = " ";
	int number_of_strs_in_array = 4;
	printf("Here is your combined array:\n");
	printf("%s", ft_strjoin(number_of_strs_in_array, multi_array, seperator));
}
*/
