# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knickel <knickel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 01:46:23 by knickel           #+#    #+#              #
#    Updated: 2022/12/04 19:21:26 by knickel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# tool macros
NAME = libft.a
CC = gcc
RM = rm -f
OPT = -O0
CFLAGS = -c -Wall -Werror -Wextra -I .

# path macros
ifdef WITH_BONUS
SRCFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstmap.c ft_lstdelone.c
else
SRCFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
endif

OBJS = $(SRCFILES:.c=.o)

# phony rules
.PHONY: all clean fclean re bonus

all: $(NAME)
	
clean:
ifdef WITH_BONUS
	$(RM) $(OBJS)
else
	$(MAKE) WITH_BONUS=1 clean
endif

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus:
	$(MAKE) WITH_BONUS=1 all

# non-phony targets
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) $^ -o $@