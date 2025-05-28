/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:02:43 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:46:53 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Concatenates two strings with size limit for the destination.
size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	dstlen;
	size_t	temp;
	size_t	i;

	dstlen = ft_strlen(dst);
	temp = dstlen;
	i = 0;
	if (dstlen >= len)
		return (ft_strlen(src) + len);
	while (temp + 1 < len && src[i] != '\0')
	{
		dst[temp] = src[i];
		i++;
		temp++;
	}
	dst[temp] = '\0';
	return (ft_strlen(src) + dstlen);
}
