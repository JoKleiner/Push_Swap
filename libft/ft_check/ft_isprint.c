/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:35:46 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:50:07 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Checks if a character is printable, including space.
int	ft_isprint(int cha)
{
	if (cha >= 32 && cha <= 126)
		return (1);
	return (0);
}
