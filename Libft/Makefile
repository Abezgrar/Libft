# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 19:11:41 by abezgrar          #+#    #+#              #
#    Updated: 2017/01/31 11:16:48 by abezgrar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =		ft_strlen.c \
		   	ft_strcpy.c \
		   	ft_strncpy.c \
		   	ft_strcmp.c \
		   	ft_strncmp.c \
		   	ft_isalpha.c \
		   	ft_isdigit.c \
		   	ft_isalnum.c \
		   	ft_isascii.c \
		   	ft_isprint.c \
		   	ft_toupper.c \
		   	ft_tolower.c \
		   	ft_memset.c \
		   	ft_bzero.c \
		   	ft_memcpy.c \
		   	ft_memccpy.c \
		   	ft_memmove.c \
		   	ft_memchr.c \
		   	ft_memcmp.c \
		   	ft_strdup.c \
		   	ft_strcat.c \
		   	ft_strncat.c \
		   	ft_strlcat.c \
		   	ft_atoi.c \
		   	ft_itoa.c \
		   	ft_memdel.c \
		   	ft_putchar.c \
		  	ft_putchar_fd.c \
		   	ft_putendl.c \
		   	ft_putendl_fd.c \
		   	ft_putnbr.c \
		   	ft_putnbr_fd.c \
		   	ft_putstr.c \
		   	ft_putstr_fd.c \
		   	ft_strchr.c \
		   	ft_strclr.c \
		   	ft_strdel.c \
		   	ft_strequ.c \
		   	ft_striter.c \
		   	ft_striteri.c \
		   	ft_strjoin.c \
		   	ft_strmap.c \
		   	ft_strmapi.c \
		   	ft_strnequ.c \
		   	ft_strnew.c \
		   	ft_strnstr.c \
		   	ft_strrchr.c \
		   	ft_strsplit.c \
		   	ft_strstr.c \
		   	ft_strsub.c \
		   	ft_strtrim.c \
		   	ft_memalloc.c \
		   	ft_lstnew.c \
		   	ft_lstdel.c \
		   	ft_lstdelone.c \
		   	ft_lstiter.c \
		   	ft_lstmap.c \
		   	ft_lstadd.c \
		   	ft_count.c \
		   	ft_lower.c \
		   	ft_upper.c \
		   	ft_iszero.c \
		   	ft_stralloc.c

CPPFLAGS = -I

CC = clang

CFLAGS = -Werror -Wall -Wextra

OBJ_NAME = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ_NAME)
	@ar -rc $(NAME) $(OBJ_NAME)
	@ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS)  -o $@ -c $<  



clean :
	rm -fv $(OBJ_NAME)
	@rmdir $(OBJ_NAME) 2> /dev/null || true

fclean: clean
	rm -fv $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

norme:
	norminette $(SRC)
	norminette $(INC_PATCH)*.h
