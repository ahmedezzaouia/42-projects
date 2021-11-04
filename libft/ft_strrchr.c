/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:25:40 by ahmez-za          #+#    #+#             */
/*   Updated: 2021/11/04 18:51:30 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != c && i != 0)
		i--;
	if (s[i] == c)
		return ((char *)(s + i));
	return (0);
}
/*int main ()
{
	printf("%s\n",ft_strchr("http://www.tutorialspoint.com",'6'));
}
*/
