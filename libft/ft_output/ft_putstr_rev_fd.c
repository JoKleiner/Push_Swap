/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_rev_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:33:48 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:49:25 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Writes a string in revers.
int	ft_putstr_rev_fd(char *str, int fd)
{
	size_t	strlen;
	int		num_ret;

	num_ret = 0;
	strlen = ft_strlen(str);
	while (strlen > 0)
	{
		if (write(fd, &str[--strlen], 1) == -1)
			return (-1);
		num_ret++;
	}
	return (num_ret);
}
