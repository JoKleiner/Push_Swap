/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:36:18 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 14:22:53 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	mem_fill2(char *ptr, long num, int i)
{
	ptr[i] = '\0';
	ptr[0] = '-';
	while (num > 0)
	{
		ptr[i - 1] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
}

void	inttoptr(long num, char *ptr)
{
	int		i;
	long	temp;

	if (num == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
		return ;
	}
	i = 0;
	if (num < 0)
	{
		i++;
		num = -num;
	}
	temp = num;
	while (temp > 0)
	{
		temp = temp / 10;
		i++;
	}
	mem_fill2(ptr, num, i);
}

// Writes an integer as a string.
int	ft_putnbr_fd(int num, int fd)
{
	char	*ptr;
	char	str[12];
	long	numlong;
	int 	strlen;

	numlong = num;
	ptr = str;
	inttoptr(numlong, ptr);
	strlen = ft_strlen((const char *)ptr);
	write(fd, ptr, strlen);
	return(strlen);
}

// int main(void)
// {
//     int test_num = -2147483648LL;
//     ft_putnbr_fd(test_num, 2);
//     return (0);
// }
