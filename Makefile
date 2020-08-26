# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/16 14:24:34 by emachrek          #+#    #+#              #
#    Updated: 2020/08/26 15:08:06 by emachrek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRCS=ft_atoi.c ft_bzero.c ft_isalnum.c \
	 ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	 ft_split.c ft_substr.c ft_strmapi.c ft_strnew.c\
	 ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	 ft_memmove.c ft_memset.c ft_strjoin.c ft_memalloc.c\
	 ft_strchr.c ft_strlcpy.c ft_strlcat.c\
	 ft_strdup.c ft_strjoin.c ft_putchar_fd.c\
	 ft_strlen.c ft_calloc.c ft_putstr_fd.c\
	 ft_strncmp.c ft_strnstr.c ft_putendl_fd.c ft_putendl.c\
	 ft_strrchr.c ft_strrev.c ft_itoa.c ft_putnbr_fd.c\
	 ft_strtrim.c ft_tolower.c ft_toupper.c

OBJS=$(SRCS:.c=.o)

$(NAME): ${OBJS}
	 $(CC) $(CFLAGS) -c $(SRCS)
	 ar rc $(NAME) $(OBJS)
	 ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re

