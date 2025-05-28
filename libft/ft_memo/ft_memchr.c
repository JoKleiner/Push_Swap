/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:42:46 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:39:40 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Locates the first char in a memory block.
void	*ft_memchr(const void *str, int cha, size_t num)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < num)
	{
		if (ptr[i] == (unsigned char)cha)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
