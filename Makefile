# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 00:24:57 by jodufour          #+#    #+#              #
#    Updated: 2022/10/29 07:18:17 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#######################################
#               COMANDS               #
#######################################
CC		=	clang
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
SRC_DIR	=	srcs
OBJ_DIR	=	objs
INC_DIR	=	include

######################################
#            SOURCE FILES            #
######################################
SRC		=	\
			ft_bzero.c			\
			ft_calloc.c			\
			ft_memccpy.c		\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_memcpy.c			\
			ft_memdel.c			\
			ft_memmove.c		\
			ft_memset.c			\
			ft_memswap.c		\
			ft_split.c			\
			ft_strcasecmp.c		\
			ft_strcat.c			\
			ft_strcdup.c		\
			ft_strchr.c			\
			ft_strcjoin.c		\
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
			ft_strsubchr.c		\
			ft_strsubidx.c		\
			ft_strtrim.c		\
			ft_substr.c

######################################
#            OBJECT FILES            #
######################################
OBJ		=	${SRC:.c=.o}
OBJ		:=	${addprefix ${OBJ_DIR}/, ${OBJ}}

DEP		=	${OBJ:.o=.d}

#######################################
#                FLAGS                #
#######################################
CFLAGS	=	-c
CFLAGS	+=	-Wall -Wextra -Werror
CFLAGS	+=	-MMD -MP
CFLAGS	+=	-I${INC_DIR}

ifeq (${DEBUG}, 1)
	CFLAGS	+=	-g
endif

LDFLAGS	=	

#######################################
#                RULES                #
#######################################
.PHONY: all clean fclean re fre

${NAME_A}: ${OBJ}
	${LINK} $@ $^ ${LDFLAGS}

${NAME_SO}: CFLAGS	+= -fPIC
${NAME_SO}: LDFLAGS += -shared
${NAME_SO}: LINK = clang
${NAME_SO}: ${OBJ}
	${LINK} $^ ${LDFLAGS} ${OUTPUT_OPTION}

all: ${NAME_A} ${NAME_SO}

-include ${DEP}

${OBJ_DIR}/%.o: ${SRC_DIR}/%.c
	@${MKDIR} ${@D}
	${CC} $< ${CFLAGS} ${OUTPUT_OPTION}

clean:
	${RM} ${OBJ_DIR}

fclean:
	${RM} ${OBJ_DIR} ${NAME_A} ${NAME_SO}

re: clean all

fre: fclean all

-include ${HOME}/Templates/mk_files/coffee.mk
-include ${HOME}/Templates/mk_files/norm.mk
