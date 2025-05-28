/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:34:06 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:37:22 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Fills a memory block with a specific byte value.
void	*ft_memset(void *str, int cha, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		((char *)str)[i] = (unsigned char)cha;
		i++;
	}
	return ((void *)str);
}
