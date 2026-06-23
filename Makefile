# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csilva-v <csilva-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/10 13:02:12 by csilva-v          #+#    #+#              #
#    Updated: 2026/06/10 13:02:13 by csilva-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude

RM = rm -f
AR = ar rcs

LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS := Src/ft_printf.c	\
		Src/print_char.c	\
		Src/print_hex.c	\
		Src/print_int.c	\
		Src/print_pointer.c	\
		Src/print_unsigned.c	\
		Src/print_str.c	\
		Src/handles_format.c

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	@cp $(LIBFT) $(NAME)
	@$(AR) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS) $(BONUS_OBJECTS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re