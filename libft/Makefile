# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmuvezwa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/10 10:32:31 by kmuvezwa          #+#    #+#              #
#    Updated: 2017/06/25 09:12:22 by kmuvezwa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCC = gcc -c -Wall -Wextra -Werror

CFILES = ft_memset.c\
		 ft_bzero.c\
		 ft_strlen.c\
		 ft_strdup.c\
		 ft_strncpy.c\
		 ft_strcat.c\
		 ft_strchr.c\
		 ft_strjoin.c\
		 ft_strnew.c\
		 ft_strsub.c\
		 ft_memalloc.c

OBJS = ft_memset.o\
	  ft_bzero.o\
	  ft_strlen.o\
	  ft_strdup.o\
	  ft_strncpy.o\
	  ft_strcat.o\
	  ft_strchr.o\
	  ft_strnew.o\
	  ft_strsub.o\
	  ft_strjoin.o\
	  ft_memalloc.o
	  

all : $(NAME)

$(NAME) :
	$(GCC) -I includes $(CFILES)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
