/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:34:33 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:48:06 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Finds the last character in a string.
char	*ft_strrchr(const char *src, int find)
{
	size_t	len;

	len = ft_strlen(src);
	if ((char)find == '\0')
		return ((char *)&src[len]);
	while (len > 0)
	{
		if (src[len] == (char)find)
			return ((char *)&src[len]);
		len--;
	}
	if (src[0] == (char)find)
		return ((char *)&src[0]);
	return (0);
}
