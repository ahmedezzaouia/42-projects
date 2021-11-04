/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:35:49 by ahmez-za          #+#    #+#             */
/*   Updated: 2021/11/04 20:36:07 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include<stdio.h>
#include<stdlib.h>

void ft_bzero(void s, size_t n);
int ft_isalnum(int c);
int ft_isalpha (int c);
int ft_isascii(int c);
int ft_isdigit(int c);
void ft_memcpy(void *dst, const void src, size_t n);
void ft_memset(void *b, int c, size_t len);
int ft_isprint(int c);
int    ft_tolower(int c);
int    ft_toupper(int c);
size_t ft_strlen(const char *s);
void    *ft_memmove(void *dst, const void *src, size_t len);
int    ft_atoi(const char *str);
char    *ft_calloc(size_t count, size_t size);
void    *ft_memchr(const void *s, int c, size_t n);
int    ft_memcmp(const void *s1, const void *s2, size_t n);
char    **ft_split(char const *str, char c);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(char *src);
char    *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
char    *ft_strmapi(char const s, char (f)(unsigned int, char));
int    ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *s, int c);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_itoa(int n);

# endif