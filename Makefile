# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 00:24:57 by jodufour          #+#    #+#              #
#    Updated: 2021/07/22 21:44:21 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#######################################
#               COMANDS               #
#######################################
CC				=	gcc -c -o
LINKER			=	ar rcs
MAKEDIR			=	mkdir -p
RM				=	rm -rf

#######################################
#               LIBRARY               #
#######################################
NAME			=	libft_string
NAME_A			=	${NAME}.a
NAME_SO			=	${NAME}.so

#######################################
#             DIRECTORIES             #
#######################################
INCD			=	includes/
SRCD			=	srcs/
OBJD			=	objs/

######################################
#            SOURCE FILES            #
######################################
SRCS			=	\
					ft_split.c			\
					ft_strcasecmp.c		\
					ft_strcat.c			\
					ft_strchr.c			\
					ft_strcmp.c			\
					ft_strcpy.c			\
					ft_strdup.c			\
					ft_striter.c		\
					ft_striteri.c		\
					ft_strjoin.c		\
					ft_strlcat.c		\
					ft_strlcpy.c		\
					ft_strlen.c			\
					ft_strlink.c		\
					ft_strmap.c			\
					ft_strmapi.c		\
					ft_strncasecmp.c	\
					ft_strncat.c		\
					ft_strncmp.c		\
					ft_strncpy.c		\
					ft_strndup.c		\
					ft_strnstr.c		\
					ft_strrchr.c		\
					ft_strrev.c			\
					ft_strstr.c			\
					ft_strtrim.c		\
					ft_substr.c

######################################
#            OBJECT FILES            #
######################################
OBJS			=	${SRCS:.c=.o}
OBJS			:=	${addprefix ${OBJD}, ${OBJS}}

DEPS			=	${OBJS:.o=.d}

#######################################
#                FLAGS                #
#######################################
CFLAGS	=	-Wall -Wextra -MMD -I${INCD}

ifeq (DEBUG, true)
	CFLAGS	+=	-g
endif

LDFLAGS	=	

#######################################
#                RULES                #
#######################################
${NAME_A}:	${OBJS}
	${LINKER} $@ ${LDFLAGS} $^

${NAME_SO}:	CFLAGS	+= -fPIC
${NAME_SO}:	LDFLAGS += -shared
${NAME_SO}:	LINKER = gcc -o
${NAME_SO}:	${OBJS}
	${LINKER} $@ ${LDFLAGS} $^

all:	${NAME_A} ${NAME_SO}

-include ${DEPS}

${OBJD}%.o:	${SRCD}%.c
	@${MAKEDIR} ${@D}
	${CC} $@ ${CFLAGS} $<

clean:
	${RM} ${OBJD}

fclean:
	${RM} ${OBJD} ${NAME_A} ${NAME_SO}

re:	fclean all

norm:
	@norminette ${SRCD} | grep 'Error' ; true

coffee:
	@echo '                                              '
	@echo '                   "   "                      '
	@echo '                  " " " "                     '
	@echo '                 " " " "                      '
	@echo '         _.-==="""""""""===-._                '
	@echo '        |=___    ~ ~ ~    ___=|=,.            '
	@echo '        |    """======="""    |  \\           '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |  //           '
	@echo '         \                   /==""            '
	@echo '          \                 /                 '
	@echo '           ""--._______.--""                  '
	@echo '                                              '

.PHONY: all clean fclean re norm coffee
