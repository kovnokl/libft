# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knickel <knickel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 01:46:23 by knickel           #+#    #+#              #
#    Updated: 2022/10/21 23:13:14 by knickel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# tool macros
CC = gcc
RM = rm -f
OPT = -O0
CFLAGS = -c -Wall -Werror -Wextra -I .

# path macros
MAINSRCFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
BONUSSRCFILES = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstmap.c ft_lstdelone.c

OBJS = $(MAINSRCFILES:.c=.o)
BONUSOBJS = $(BONUSSRCFILES:.c=.o)

NAME = libft.a

# phony rules
.PHONY: all clean fclean re bonus

all: $(NAME)

clean:
	$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(BONUSOBJS)
	ar rc $(NAME) $(OBJS) $(BONUSOBJS)
	ranlib $(NAME)

# non-phony targets
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) $^ -o $@