/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 11:09:24 by raguillo          #+#    #+#             */
/*   Updated: 2019/03/01 14:27:22 by raguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 42
# include "libft/libft.h"

typedef struct		s_struct
{
	unsigned int	fd;
	char			*str;
	struct s_struct *next;
}					t_struct;

int					get_next_line(int fd, char **line);

#endif
