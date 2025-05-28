/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:31:04 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:48:53 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>

//Writes a string followed by a newline.
void	ft_putendl_fd(char *str, int fd)
{
	write(fd, str, ft_strlen((const char *)str));
	write(fd, "\n", 1);
}
