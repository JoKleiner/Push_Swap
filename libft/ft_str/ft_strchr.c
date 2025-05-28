/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:41 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:45:51 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Finds the first character in a string.
char	*ft_strchr(const char *str, int cha)
{
	size_t	i;

	if ((unsigned char)cha == '\0')
		return ( (char *) &str [ft_strlen(str)]       );
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)cha)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
