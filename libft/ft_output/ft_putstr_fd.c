/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:33:48 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:49:16 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Writes a string.
long	ft_putstr_fd(char *str, int fd)
{
	size_t	strlen;

	if (str == NULL)
	{
		if (write(fd, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	strlen = ft_strlen((const char *)str);
	if (write(fd, str, strlen) == -1)
		return (-1);
	return (strlen);
}
