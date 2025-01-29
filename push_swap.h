/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:19:34 by joklein           #+#    #+#             */
/*   Updated: 2025/01/29 19:22:01 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

// Check, arg to lst, start/end sorting
int					check_arg(char **argv);
int					check_double_int(t_list **a_one);
int					arg_to_alst(t_list **a_one, int argc, char **argv);
void				sorting(t_list **a_one, t_list **b_one);
void				rotate_a_end(t_list **a_one);

// push in stack a sort
void				calc_low_push_a(t_list **a_one, t_list **b_one);
int					cost_temp(t_list *a_one, t_list *b_one, t_list *temp_b,
						int num);
int					cost_rotate_a(t_list *a_one, int num);
int					sw_case_3(t_list *a_one, t_list *b_one, t_list *temp_b,
						int num);
void				push_in_a(t_list **a_one, t_list **b_one);
void				sw_case_zero(t_list **a_one, t_list **b_one,
						t_list *temp);
void				sw_case_one(t_list **a_one, t_list **b_one, t_list *temp);
void				sw_case_two(t_list **a_one, t_list **b_one, t_list *temp);
void				sw_case_three(t_list **a_one, t_list **b_one,
						t_list *temp);
int					a_pos_correct(t_list **a_one, t_list *temp);

// sorting utils
int					count_stack(t_list **pos_one);
int					f_min(t_list **pos_one);
int					f_max(t_list **pos_one);
void				sort_three(t_list **pos1);
int					cost_index(t_list *pos_one, int num);
t_list				*find_low_push(t_list **pos_one);
int					is_sort(t_list **a_one);

// operations
void				push(t_list **pos_one_in, t_list **pos_one_out, int i);
void				rotate(t_list **pos_one, int i);
void				both_rotate(t_list **a_one, t_list **b_one);
void				re_rotate(t_list **pos_one, int i);
void				re_both_rotate(t_list **a_one, t_list **b_one);
void				swap(t_list **pos_one, int i);
void				both_swap(t_list **a_one, t_list **b_one);

#endif
