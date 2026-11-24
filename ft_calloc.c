/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaafar <mjaafar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 16:10:05 by mjaafar           #+#    #+#             */
/*   Updated: 2026/11/17 17:25:46 by mjaafar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total;
	size_t			i;

	total = nmemb * size;
	if (nmemb != 0 && total / nmemb != size)
		return (NULL);
	if (total == 0)
		total = 1;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <stdint.h>
// #include "libft.h"

// int	main(void)
// {
// 	int		*tab;
// 	int		i;

// 	tab = ft_calloc(5, sizeof(int));
// 	if (tab == NULL)
// 		return (1);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	free(tab);
// }
