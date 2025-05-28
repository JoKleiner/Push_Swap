/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:15:07 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:47:44 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Duplicates n characters of a string in a newly allocated memory block.
char	*ft_strndup(const char *str, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *)malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	while (i < len)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
