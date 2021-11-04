/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:51:18 by ahmez-za          #+#    #+#             */
/*   Updated: 2021/11/04 18:34:13 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	s = b;
	i = 0;
	while (i < len && s[i])
		s[i++] = (unsigned char) c;
	return (b);
}
/*int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    ft_memset(str + 15, '.', 8);
    printf("After memset():  %s", str);
    return 0;
}
*/
