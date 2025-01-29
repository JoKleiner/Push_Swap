/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:29:26 by joklein           #+#    #+#             */
/*   Updated: 2025/01/16 12:44:17 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **pos_one, int i)
{
	t_list	*pos_two;
	t_list	*pos_three;
	t_list	*temp;

	temp = *pos_one;
	pos_two = temp->next;
	pos_three = pos_two->next;
	*pos_one = pos_two;
	(*pos_one)->prev = NULL;
	(*pos_one)->next = temp;
	temp->prev = *pos_one;
	temp->next = pos_three;
	if (pos_three)
		pos_three->prev = temp;
	if (i == 1)
		ft_printf("sa\n");
	if (i == 2)
		ft_printf("sb\n");
}

void	both_swap(t_list **a_one, t_list **b_one)
{
	swap(a_one, 0);
	swap(b_one, 0);
	ft_printf("ss\n");
}
