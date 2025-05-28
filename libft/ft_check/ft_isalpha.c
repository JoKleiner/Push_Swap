/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:57:49 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:49:46 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Checks if a character is an alphabetic letter.
int	ft_isalpha(int cha)
{
	if ((cha >= 'A' && cha <= 'Z') || (cha >= 'a' && cha <= 'z'))
		return (1);
	return (0);
}
