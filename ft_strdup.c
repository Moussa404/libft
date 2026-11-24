/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaafar <mjaafar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 15:29:53 by mjaafar           #+#    #+#             */
/*   Updated: 2026/11/15 15:31:31 by mjaafar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*m;
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	m = malloc(sizeof(char) * (i + 1));
	if (!m)
		return (NULL);
	j = 0;
	while (s[j])
	{
		m[j] = s[j];
		j++;
	}
	m[j] = '\0';
	return (m);
}
