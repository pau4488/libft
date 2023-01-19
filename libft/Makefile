# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 02:09:51 by pbrossa-          #+#    #+#              #
#    Updated: 2023/01/19 22:26:49 by pbrossa-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

FILES	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_memcpy.c \
			ft_memmove.c

OBJS	=	$(FILES:.c=.o)

CC		=	gcc

LIBC	=	ar -rcs

FLAGS	=	-Wall -Werror -Wextra

.c.o:
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

all: $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)