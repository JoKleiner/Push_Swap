/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:20:28 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:49:40 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Checks if a character is alphanumeric (letter or digit).
int	ft_isalnum(int cha)
{
	if ((cha >= 'A' && cha <= 'Z')
		|| (cha >= 'a' && cha <= 'z')
		|| (cha >= '0' && cha <= '9'))
		return (1);
	return (0);
}
