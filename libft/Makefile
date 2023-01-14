# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 02:09:51 by pbrossa-          #+#    #+#              #
#    Updated: 2023/01/14 02:25:12 by pbrossa-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libf.a

FILES	=	ft_isalpha.c \
			ft_isdigit.c

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