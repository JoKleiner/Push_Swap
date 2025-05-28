/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:48:50 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:47:01 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Copies a string to a destination buffer with size limit.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	i;

	i = 0;
	if (dstlen == 0)
		return (ft_strlen(src));
	while (i + 1 < dstlen && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dstlen > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
