# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wphylici <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 20:52:51 by wphylici          #+#    #+#              #
#    Updated: 2020/05/25 04:15:27 by wphylici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRCS := ft_isdigit.c ft_memset.c ft_strjoin.c\
	ft_strtrim.c ft_isprint.c ft_putchar_fd.c\
	ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c\
	ft_putendl_fd.c ft_strlcpy.c ft_tolower.c\
	ft_bzero.c ft_memccpy.c ft_putnbr_fd.c\
	ft_strlen.c ft_toupper.c ft_calloc.c\
	ft_memchr.c ft_putstr_fd.c ft_strmapi.c\
	ft_isalnum.c ft_memcmp.c ft_split.c\
	ft_strncmp.c ft_isalpha.c ft_memcpy.c\
	ft_strchr.c ft_strnstr.c ft_isascii.c\
	ft_memmove.c ft_strdup.c ft_strrchr.c

SRCS_BONUS := ft_lstadd_back.c ft_lstadd_front.c\
	ft_lstclear.c ft_lstdelone.c ft_lstmap.c\
	ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c\

CC := gcc

HEADERS := libft.h

FLAGS := -Wall -Wextra -Werror

OBJ_SRCS := $(SRCS:.c=.o)

OBJ_BONUS := $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_SRCS) $(HEADERS)
	@ar rc $(NAME) $(OBJ_SRCS)
	@ranlib $(NAME)

bonus: $(OBJ_SRCS) $(OBJ_BONUS)
	@ar rc $(NAME) $(OBJ_SRCS) $(OBJ_BONUS)
	@ranlib $(NAME)

%.o: %.c $(HEADERS)
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@/bin/rm -f $(OBJ_SRCS) $(OBJ_BONUS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
