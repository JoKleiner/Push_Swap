/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:50:33 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:40:18 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Copies memory with overlapping areas handled safely.
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dstptr;
	const char	*srcptr;

	dstptr = (char *)dst;
	srcptr = (const char *)src;
	if (dst == 0 && src == 0)
		return (0);
	i = 0;
	if (dstptr < srcptr)
	{
		while (i < len)
		{
			dstptr[i] = srcptr[i];
			i++;
		}
		return (dst);
	}
	i = len;
	while (i > 0)
	{
		i--;
		dstptr[i] = srcptr[i];
	}
	return (dst);
}
