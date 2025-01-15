/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhenriq <dev@juliohenrique.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 01:13:44 by juhenriq          #+#    #+#             */
/*   Updated: 2025/01/12 15:54:25 by juhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		combined_len;
	char	*new_string;

	if ((!(s1)) && (!(s2)))
		return (NULL);
	if (!(s1))
		return (ft_strdup(s2));
	if (!(s2))
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	combined_len = (s1_len + s2_len) + 1;
	new_string = (char *) malloc(combined_len);
	if (!(new_string))
		return ((void *) 0);
	ft_strlcpy(new_string, s1, s1_len + 1);
	ft_strlcat(new_string, s2, combined_len);
	return (new_string);
}