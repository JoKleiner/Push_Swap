/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:40:31 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:47:33 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Compares two strings up to a specified number of characters.
int	ft_strncmp(const char *src1, const char *src2, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num && (src1[i] != '\0' || src2[i] != '\0'))
	{
		if (src1[i] != src2[i])
			return ((unsigned char)src1[i] - (unsigned char)src2[i]);
		i++;
	}
	return (0);
}
