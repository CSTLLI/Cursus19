# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/06 10:47:38 by vcastell          #+#    #+#              #
#    Updated: 2021/05/14 17:06:10 by vcastell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_memset.c \
		ft_calloc.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_bzero.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

FILES_BONUS = ${FILES} \
				ft_lstnew.c \
			  	ft_lstadd_front.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstsize.c \
				ft_lstmap.c

OBJ	= ${FILES:.c=.o}

OBJ_BONUS = ${FILES_BONUS:.c=.o}

NAME	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

$(NAME):	${OBJ}
			${CC} ${CFLAGS} -c ${FILES}
			ar rcs ${NAME} ${OBJ}

all:		${NAME}

bonus :		${OBJ_BONUS}
			${CC} ${CFLAGS} -c ${FILES_BONUS}
			ar rcs ${NAME} ${OBJ_BONUS}

clean:
			${RM} ${OBJ_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

so:
	@${CC}	-fPIC -c ${CFLAGS} ${FILES_BONUS}
	@${CC}	-shared	-o libft.so ${OBJ_BONUS}
	@printf " _____________________________________\n"
	@printf "|___ Libft.so successfully created ___|\n\n"
	
.PHONY: all bonus clean fclean re so