/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:59:09 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/23 13:33:47 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j > 0 && *(tab + j - 1) > *(tab + j))
		{
			swap(tab + j, tab + j - 1);
			j--;
		}
		i++;
	}
}

/*
#include <stdio.h>

int main(void)
{
int tabelle[5] = {5, 3, 1, 4, 2};
int size = 5;

 printf("Your numbers: ");
    for (int i = 0; i < size; i++) 
        printf("%d ", tabelle[i]);
    printf("\n");
    printf("Size of your Array: %d\n", size);
    printf("Your sorted numbers: ");
    ft_sort_int_tab(tabelle, size);
    for (int i = 0; i < size; i++) 
        printf("%d ", tabelle[i]);
}
*/
