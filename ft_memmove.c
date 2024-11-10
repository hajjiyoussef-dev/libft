/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:28:51 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/08 20:01:28 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*str;
	unsigned char		*ptr;
	size_t				i;

	i = 0;
	if (dest == src)
		return (dest);
	ptr = (unsigned char *)dest;
	str = (const unsigned char *)src;
	if (ptr > str)
	{
		while (n--)
			ptr[n] = str[n];
	}
	else
	{
		while (i < n)
		{
			ptr[i] = str[i];
			i++;
		}
	}
	return (dest);
}
