/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:09:05 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:48:46 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Writes a single character.
void	ft_putchar_fd(char cha, int fd)
{
	write(fd, &cha, 1);
}
