/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:03:45 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/22 18:47:35 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len])
	{
		str_len++;
	}
	return (str_len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*dupe_str;

	length = ft_strlen(src);
	dupe_str = (char *) malloc(sizeof(char) * length);
	if (dupe_str == NULL)
		return (NULL);
	ft_strcpy(dupe_str, src);
	return (dupe_str);
}

/*
int	main(void)
{
	char	*original = "Martin ist cool!";
	char	*dupe = ft_strdup(original);

	printf("OG Str: %s\n", original);
	printf("Dupe Str: %s\n", dupe);
}
*/
