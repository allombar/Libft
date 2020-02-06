/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allombar <allombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 13:11:52 by allombar          #+#    #+#             */
/*   Updated: 2020/02/06 15:44:09 by allombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

size_t		ft_strlen(const char *s);
int		    ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_atoi(const char *str);
void	    *ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int		    ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strdup(const char *src);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strrchr(const char *s, int c);
char		*ft_strchr(const char *s, int c);
void		*ft_memcpy(void *dst, const void *src, size_t n);

#endif
