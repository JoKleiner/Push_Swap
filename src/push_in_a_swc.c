/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_a_swc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:50:19 by joklein           #+#    #+#             */
/*   Updated: 2025/01/29 14:31:13 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	a_pos_correct(t_list **a_one, t_list *temp)
{
	if (temp->num < (*a_one)->num && temp->num > ft_lstlast(*a_one)->num)
		return (1);
	if ((temp->num < f_min(a_one) || temp->num > f_max(a_one))
		&& (*a_one)->num == f_min(a_one))
		return (1);
	return (0);
}

void	sw_case_three(t_list **a_one, t_list **b_one, t_list *temp)
{
	while (1)
	{
		if ((*b_one)->index != 1 && (!a_pos_correct(a_one, temp)))
		{
			re_both_rotate(a_one, b_one);
			continue ;
		}
		if ((*b_one)->index != 1)
			re_rotate(b_one, 2);
		else if (!a_pos_correct(a_one, temp))
			re_rotate(a_one, 1);
		else
			break ;
	}
}

void	sw_case_two(t_list **a_one, t_list **b_one, t_list *temp)
{
	while ((*b_one)->index != 1)
		rotate(b_one, 2);
	while (1)
	{
		if (a_pos_correct(a_one, temp))
			break ;
		re_rotate(a_one, 1);
	}
}

void	sw_case_one(t_list **a_one, t_list **b_one, t_list *temp)
{
	while ((*b_one)->index != 1)
		re_rotate(b_one, 2);
	while (1)
	{
		if (a_pos_correct(a_one, temp))
			break ;
		rotate(a_one, 1);
	}
}

void	sw_case_zero(t_list **a_one, t_list **b_one, t_list *temp)
{
	while (1)
	{
		if ((*b_one)->index != 1 && (!a_pos_correct(a_one, temp)))
		{
			both_rotate(a_one, b_one);
			continue ;
		}
		if ((*b_one)->index != 1)
		{
			rotate(b_one, 2);
			continue ;
		}
		if (!a_pos_correct(a_one, temp))
			rotate(a_one, 1);
		else
			break ;
	}
}
