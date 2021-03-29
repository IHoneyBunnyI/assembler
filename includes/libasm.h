/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasimbaybikov <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:45:05 by kasimbayb         #+#    #+#             */
/*   Updated: 2021/03/29 17:45:35 by kasimbayb        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stdio.h>
# include <errno.h>

size_t		ft_strlen(char *s);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(char *s1, char *s2);
ssize_t		ft_write(int fields, char *buf, size_t nbyte);
ssize_t		ft_read(int fields, char *buf, size_t nbyte);
char		*ft_strdup(char *s1);
#endif
