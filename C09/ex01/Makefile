# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/18 09:42:48 by lucsanto          #+#    #+#              #
#    Updated: 2026/03/18 09:42:49 by lucsanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c 

OBJ =  srcs/ft_putchar.o \
	  srcs/ft_putstr.o \
	  srcs/ft_strcmp.o \
	  srcs/ft_strlen.o \
	  srcs/ft_swap.o 

HEADER = includes/ft.h

all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

srcs/%.o: srcs/%.c $(HEADER)
	$(CC) $(CFLAGS) -I includes -c $< -o $@

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
