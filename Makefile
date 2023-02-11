# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 14:29:33 by anmassy           #+#    #+#              #
#    Updated: 2022/11/21 11:02:17 by anmassy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c \
        ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_memcpy.c\
        ft_itoa.c ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
        ft_tolower.c ft_bzero.c  ft_isascii.c ft_strjoin.c ft_striteri.c\
        ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c ft_strmapi.c\
        ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c \
        ft_putstr_fd.c ft_memmove.c ft_strnstr.c ft_substr.c ft_strtrim.c

INCLUDES	= libft.h
BONUS_FUNCTIONS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
                  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
                  ft_lstmap.c
                
NAME    = libft.a

OBJ     = $(SRCS:.c=.o)

OBJ_BONUS = $(BONUS_FUNCTIONS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ) $(OBJ_BONUS)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -I includes -o $@

clean:
	/bin/rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

