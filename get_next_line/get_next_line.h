/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:19:16 by mouad             #+#    #+#             */
/*   Updated: 2024/12/03 13:49:51 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>

size_t  ft_strlen(char  *str);
char    *ft_strdup(char *str);
char    *ft_strchr(char *str,int    c);
char    *ft_strjoin(char    *s1, char   *s2);

#endif