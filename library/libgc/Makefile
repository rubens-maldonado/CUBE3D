# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsantann <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/08 12:47:27 by jsantann          #+#    #+#              #
#    Updated: 2023/07/08 12:47:33 by jsantann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# +>                                     NAME 

NAME	= libgc.a
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    SOURCES 

MDTRY_SRCS	= \
			  gc_memtools.c \
			  gc_memutils.c \
			  gc_strutils.c \
			  gc_printf.c \
			  gc_pututils.c
			 
MDTRY_OBJS	= $(MDTRY_SRCS:.c=.o)
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    ALIASES 

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
MAKEFLAGS	+= --no-print-directory
MAKE		= make -C
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     CODES 

BLANK			= \e[m
RED				= \e[38;5;9m
YELLOW			= \e[38;5;11m
GREEN			= \e[38;5;2m
BLUE			= \e[38;5;6m
PURPLE			= \e[38;5;5m
PINK			= \e[38;5;13m
WHITE			= \e[38;5;15m

STRONG			= \e[1m
SHADOW			= \e[2m
ITALIC			= \e[3m
UNDLINE			= \e[4m
UPPLINE			= \e[53m
DUNDLINE		= \e[21m
CENSORED		= \e[9m
UPALIGN			= \e[73m
DWALIGN			= \e[74m
FULLER			= \e[7m
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     RULES 

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	OBJS := $(MDTRY_OBJS)

all:	$(MDTRY_OBJS) $(NAME)

bonus:	OBJS := $(BN_OBJS)

bonus:	$(BN_OBJS) $(NAME)

debug:	CFLAGS += -g

debug:	re

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
ifneq (,$(shell ls $(MDTRY_OBJS) 2> /dev/null))
	rm -rf $(MDTRY_OBJS)
endif
ifneq (,$(shell ls $(BN_OBJS) 2> /dev/null))
	rm -rf $(BN_OBJS)
endif

fclean:		clean
ifneq (,$(shell ls $(NAME) 2> /dev/null))
	rm -rf $(NAME)
endif

re:			fclean all

bre:		fclean bonus

.PHONY:		all bonus debug clean fclean re bre
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# vim: fdm=marker fmr=+>,<+ ts=4 sw=4 nofen noet:
