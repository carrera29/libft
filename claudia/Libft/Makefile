# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 08:22:53 by clcarre           #+#    #+#              #
#    Updated: 2022/04/11 10:29:53 by clcarre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  	= libft.a
LIB 	= ar -rcs

SRC		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
			ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
			ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRC_B	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c 	ft_lstdelone.c ft_lstiter.c \
			ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS 	= $(SRC:.c=.o)
OBJS_B	= $(SRC_B:.c=.o)

B = ./

CFLAGS 	= -Wall -Wextra -Werror

$(NAME) : $(OBJS)
	$(LIB) $(NAME) $(OBJS)
	ranlib $(NAME)

$(B) : $(OBJS_B)
	$(LIB) $(NAME) $(OBJS_B)

$(CC) = gcc $(FLAGS) -c $< -o $(<:.c=.o)

all : $(NAME)

bonus : $(B)

clean : 
	rm -f $(OBJS) $(OBJS_B)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re