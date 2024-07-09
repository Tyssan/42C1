# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbrunier <tbrunier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 00:53:30 by tbrunier          #+#    #+#              #
#    Updated: 2024/05/16 00:53:30 by tbrunier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
## VARIABLES

NAME		= libftprintf.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

INCLUDE		= include/
SRC_PATH	= src/
OBJ_PATH	= obj/

################################################################################
## SOURCES

SRC_FILES	=	ft_printf.c ft_printf_utils.c \
				ft_print_hex.c ft_print_unsigned.c ft_print_ptr.c \
				ft_itoa.c ft_putchar_fd.c ft_strdup.c ft_strlen.c
SRCS		=	$(addprefix $(SRC_PATH),$(SRC_FILES))
OBJS		=	$(addprefix $(OBJ_PATH),$(SRC_FILES:.c=.o))

################################################################################
## RULES

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c | $(OBJ_PATH)
	$(CC) -o $@ -c $< $(CFLAGS) -I $(INCLUDE)
$(OBJ_PATH) :
	mkdir -p $(OBJ_PATH)

clean :
	rm -rf $(OBJ_PATH)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re
