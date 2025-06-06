# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsantann <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/08 12:49:14 by jsantann          #+#    #+#              #
#    Updated: 2023/07/08 12:49:16 by jsantann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# +>                                     NAME

NAME		= libmlx.a

OS			= $(shell uname)
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     PATH

MLX_PTH		= mlx-$(OS)/

MLX_HEADER	= mlx.h
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    ALIASES 

ifeq ($(OS),Linux)
MLXFLAGS	= -lXext -lX11 -lz
DEF			= -D ISLINUX=1
else ifeq ($(OS),Darwin)
MLXFLAGS	= -framework OpenGL -framework AppKit
DEF			= -D ISLINUX=0
endif
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     CODES 

NULL			= \e[m
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

all:	update_tools $(NAME) import_header

update_tools:
	make -C $(MLX_PTH) && sleep 0.5

$(NAME): $(MLX_PTH)$(NAME)
	@printf "[${YELLOW}${BOLD}INFO${NULL}] ${UNDINE}Compiling${NULL} ${NAME} library\n" $(REDIR)
	cp $(MLX_PTH)$(NAME) .
	@printf "[${GREEN}${BOLD}INFO${NULL}] ${NAME} library ${BOLD}Compiled${NULL}\n" $(REDIR)

import_header:
ifeq (,$(shell ls $(MLX_HEADER) 2> /dev/null))
	cp $(MLX_PTH).$(MLX_HEADER) ./$(MLX_HEADER)
endif

clean:
	make -C $(MLX_PTH) clean

fclean: clean
ifneq (,$(shell ls $(NAME) $(MLX_HEADER) 2> /dev/null))
	@printf "[${YELLOW}${BOLD}INFO${NULL}] ${UNDLINE}Deleting${NULL} ${NAME} library\n" $(REDIR)
	rm -rf $(shell ls $(NAME) $(MLX_HEADER) 2> /dev/null)
	@printf "[${RED}${BOLD}INFO${NULL}] ${NAME} library ${BOLD}Deleted${NULL}\n" $(REDIR)
endif

re:	fclean all

.PHONY: all re mclean tclean clean fclean update_tools debug
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# vim: fdm=marker fmr=+>,<+ ts=4 sw=4 nofen noet:
