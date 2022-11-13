# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svilaca- <svilaca-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 14:38:51 by svilaca-          #+#    #+#              #
#    Updated: 2022/11/13 16:33:11 by svilaca-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c\
      ft_isascii.c ft_isprint.c ft_strlen.c\
	  ft_memset.c ft_bzero.c ft_memcpy.c\
	  ft_memmove.c ft_strlcpy.c ft_strlcat.c\
	  ft_toupper.c ft_tolower.c ft_strchr.c\
	  ft_strrchr.c ft_strncmp.c ft_memchr.c\
	  ft_memcmp.c ft_strnstr.c ft_atoi.c\
	  ft_calloc.c ft_strdup.c ft_substr.c\
	  ft_strjoin.c 

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re