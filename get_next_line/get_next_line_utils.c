/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:18:30 by mouad             #+#    #+#             */
/*   Updated: 2024/12/03 14:05:20 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t  ft_strlen(char  *str)
{
    if(!str)
        return 0;
        
    size_t  i;

    i = 0;
    while(str[i])
        i++;

    return (i);
}

char    *ft_strdup(char *str)
{
    if(!str)
        return NULL;

    char    *duplicated;
    size_t   str_len;

    str_len = ft_strlen(str);
    
    duplicated = (char  *)malloc((str_len + 1) * sizeof(char));
    if(!duplicated)
        return NULL;

    size_t  i;
    size_t  j;
    j = 0;
    i = 0;
    while(str[i])
        duplicated[j++] = str[i++];

    duplicated[j] = '\0';
    return (duplicated);
}

char    *ft_strchr(char *str,int    c)
{
    if(!str)
        return (NULL);
    if(c == 0)
        return (ft_strdup(str));

    while(*str)
    {
        if(*str == (char )c)
        {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}

char    *ft_strjoin(char    *s1, char   *s2)
{
    if(!s1)
        return ft_strdup(s2);
    if(!s2)
        return ft_strdup(s1);
    if(!s1 && !s2)
        return NULL;

    size_t  i;
    size_t  j;
    size_t  total_len;
    char    *joined;
    
    total_len = ft_strlen(s1) + ft_strlen(s2);
    
    joined = (char  *)malloc((total_len + 1) * sizeof(char));
    if(!joined)
        return NULL;

    i = 0;
    j = 0;
    while(s1[i])
        joined[j++] = s1[i++];

    i = 0;
    while(s2[i])
        joined[j++] = s2[i++];

    joined[j] = '\0';

    return (joined); 
}
