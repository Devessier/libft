# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 09:13:12 by bdevessi          #+#    #+#              #
#    Updated: 2018/11/08 09:53:33 by bdevessi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

RM = rm -f

AR = ar -cvr

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): libft.h

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
