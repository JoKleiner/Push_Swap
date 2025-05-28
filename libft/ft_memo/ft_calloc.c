/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:17:48 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:35:52 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Allocates memory and initializes all bytes to zero.
void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*dst;
	size_t			i;

	i = 0;
	dst = malloc(num * size);
	if (dst == NULL)
		return (NULL);
	while (i < num * size)
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
