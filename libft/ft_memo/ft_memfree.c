/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:02:39 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:40:10 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Freed all memory that were allocated.
void	ft_memfree(char **wordptr, size_t i)
{
	while (i > 0)
	{
		free(wordptr[i - 1]);
		i--;
	}
	free(wordptr);
}
