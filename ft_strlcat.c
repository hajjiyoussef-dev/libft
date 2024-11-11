/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:29:42 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/11 19:31:43 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	j = 0;
	if (dest == NULL)
		return (ft_strlen(src));
	slen = ft_strlen(src);
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	if (size == 0 || dlen >= size)
		return ((slen + size));
	while (src[i] != '\0' && ((dlen + i) < (size - 1)))
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}
