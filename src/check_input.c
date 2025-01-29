/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:06:39 by joklein           #+#    #+#             */
/*   Updated: 2025/01/29 14:31:10 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_arg(char **argv)
{
	int	i;
	int	u;

	i = 1;
	while (argv[i])
	{
		u = 0;
		while (argv[i][u])
		{
			if (argv[i][u] == '-' || argv[i][u] == '+')
			{
				if (argv[i][u - 1])
					if (argv[i][u - 1] != ' ')
						return (1);
				u++;
				if (argv[i][u] < '0' || argv[i][u] > '9')
					return (1);
			}
			if (argv[i][u] != ' ' && (argv[i][u] < '0' || argv[i][u] > '9'))
				return (1);
			u++;
		}
		i++;
	}
	return (0);
}

int	check_double_int(t_list **a_one)
{
	t_list	*temp1;
	t_list	*temp2;

	temp1 = *a_one;
	while (temp1)
	{
		if (temp1->num > 2147483647 || temp1->num < -2147483648)
			return (1);
		temp2 = temp1->next;
		while (temp2)
		{
			if (temp1->num == temp2->num)
				return (1);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return (0);
}
