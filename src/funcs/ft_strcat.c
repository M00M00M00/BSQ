/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukim <mukim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:12:12 by mukim             #+#    #+#             */
/*   Updated: 2022/02/23 14:37:24 by mukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (original_dest);
}
