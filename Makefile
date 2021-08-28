# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 00:24:57 by jodufour          #+#    #+#              #
#    Updated: 2021/08/29 00:13:35 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#######################################
#               COMANDS               #
#######################################
CC		=	clang -c -o
LINK	=	ar rcs
MKDIR	=	mkdir -p
RM		=	rm -rf

#######################################
#               LIBRARY               #
#######################################
NAME	=	libft_string
NAME_A	=	${NAME}.a
NAME_SO	=	${NAME}.so

#######################################
#             DIRECTORIES             #
#######################################
SRC_DIR	=	srcs/
OBJ_DIR	=	objs/
INC_DIR	=	includes/

######################################
#            SOURCE FILES            #
######################################
SRC		=	\
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
OBJ		=	${SRC:.c=.o}
OBJ		:=	${addprefix ${OBJ_DIR}, ${OBJ}}

DEP		=	${OBJ:.o=.d}

#######################################
#                FLAGS                #
#######################################
CFLAGS	=	-Wall -Wextra -Werror
CFLAGS	+=	-MMD -MP
CFLAGS	+=	-I${INC_DIR}

ifeq (${DEBUG}, true)
	CFLAGS	+=	-g
endif

LDFLAGS	=	

#######################################
#                RULES                #
#######################################
${NAME_A}:	${OBJ}
	${LINK} $@ ${LDFLAGS} $^

${NAME_SO}:	CFLAGS	+= -fPIC
${NAME_SO}:	LDFLAGS += -shared
${NAME_SO}:	LINK = clang -o
${NAME_SO}:	${OBJ}
	${LINK} $@ ${LDFLAGS} $^

all:	${NAME_A} ${NAME_SO}

-include ${DEP}

${OBJ_DIR}%.o:	${SRC_DIR}%.c
	@${MKDIR} ${@D}
	${CC} $@ ${CFLAGS} $<

clean:
	${RM} ${OBJ_DIR}

fclean:
	${RM} ${OBJ_DIR} ${NAME_A} ${NAME_SO}

re:	fclean all

norm:
	@norminette ${SRC_DIR} ${INC_DIR} | grep 'Error' ; true

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
