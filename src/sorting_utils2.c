/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:06:05 by joklein           #+#    #+#             */
/*   Updated: 2025/01/29 14:31:25 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*find_low_push(t_list **pos_one)
{
	t_list	*temp;

	temp = *pos_one;
	while (temp)
	{
		if (temp->index == 1)
			break ;
		temp = temp->next;
	}
	return (temp);
}

int	cost_index(t_list *pos_one, int num)
{
	int	cost;

	cost = 0;
	while (pos_one)
	{
		if (pos_one->num == num)
			break ;
		pos_one = pos_one->next;
		cost++;
	}
	return (cost);
}

int	is_sort(t_list **a_one)
{
	t_list	*temp;

	temp = *a_one;
	while (temp->next)
	{
		if (temp->num > temp->next->num)
			return (0);
		temp = temp->next;
	}
	return (1);
}

// void	print_func(t_list *a_one, t_list *b_one)
// {
// 	t_list *a_cur;
// 	t_list *b_cur;

// 	a_cur = a_one;
// 	b_cur = b_one;
// 	ft_printf("num, cost, index, switch_case\n");
// 	while (a_cur|| b_cur)
// 	{
// 		if (a_cur)
// 		{
// 			ft_printf("%d, %d, %d, %d", a_cur->num, a_cur->push_cost,
				//a_cur->index, a_cur->switch_case);
				// 			a_cur = a_cur->next;
				// 		}
				// 		if (b_cur)
				// 		{
				// 			ft_printf("		%d, %d, %d, %d", b_cur->num,
										//b_cur->push_cost,
						//b_cur->index, b_cur->switch_case);
						// 			b_cur = b_cur->next;
						// 		}
						// 		ft_printf("\n");
						// 	}
						// 	// ft_printf("\nRevers\n");
						// 	// while (a_cur->prev || b_cur->prev)
						// 	// {
						// 	// 	if (a_cur->prev)
						// 	// 	{
						// 	// 		ft_printf("%d, %d, %d, %d", a_cur->num,
										//a_cur->push_cost,
				//a_cur->index, a_cur->switch_case);
				// 	// 		a_cur = a_cur->prev;
				// 	// 	}
				// 	// 	if (b_cur->prev)
				// 	// 	{
				// 	// 		ft_printf("	%d, %d, %d, %d", b_cur->num,
									//b_cur->push_cost,
					//b_cur->index, b_cur->switch_case);
					// 	// 		b_cur = b_cur->prev;
					// 	// 	}
					// 	// 	printf("\n");
					// 	// }
					// 	// 	ft_printf("%d, %d, %d, %d", a_cur->num,
								//a_cur->push_cost, a_cur->index,
			//a_cur->switch_case);
			// 	// ft_printf("	%d, %d, %d, %d", b_cur->num, b_cur->push_cost,
						//b_cur->index,
			//b_cur->switch_case);
			// 	// ft_printf("\n\n\n");
			// }
