/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:10:49 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/08 15:38:53 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(void *ptr, int value, int size)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = (unsigned char *)ptr;
	while (size--)
	{
		*p++ = (unsigned char ) value;
	}
	return (ptr);
}
