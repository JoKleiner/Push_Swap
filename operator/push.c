/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:51:56 by joklein           #+#    #+#             */
/*   Updated: 2025/01/29 14:30:45 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **pos_one_in, t_list **pos_one_out, int i)
{
	t_list	*temp_in;
	t_list	*temp_out_pos_two;

	if (!*pos_one_out)
		return ;
	temp_in = *pos_one_in;
	temp_out_pos_two = (*pos_one_out)->next;
	*pos_one_in = *pos_one_out;
	(*pos_one_in)->index = 0;
	(*pos_one_in)->next = temp_in;
	if (temp_in)
		temp_in->prev = *pos_one_in;
	*pos_one_out = temp_out_pos_two;
	if (*pos_one_out)
		(*pos_one_out)->prev = NULL;
	if (i == 1)
		ft_printf("pb\n");
	if (i == 2)
		ft_printf("pa\n");
}
