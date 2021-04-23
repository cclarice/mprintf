# **************************************************************************** #
#                                                                              #
#        ::::::    ::::::   :::  ::::::::  ::::::::   :::  ::::::    :::::::   #
#      :+:   :+: :+:   :+: :+: :+:   :+:  :+:    :+: :+: :+:   :+: :+:    :+:  #
#     +:+       +:+       +:+ +:+   +:+  +:+    +:+     +:+       +:+    +:+   #
#    +#+       +:+       +#+ +:+   +#+  +:+    +#+ +:+ +#+       +#+:+:+#+:    #
#   +#+       +#+       +#+   +#+#+#+# #+#+#+#+   +#+ +#+       +#+            #
#  #+#   #+# #+#   #+# #+#            #+#    #+# #+# #+#   #+# #+#    #+#      #
#   ######    ######  ############## ###    ### ###   ######    #######        #
#                                                                              #
# **************************************************************************** #
#                                                                              #
#    Makefile                                 cclarice@student.21-school.ru    #
#                                                                              #
#    Created/Updated: 2021/04/23 17:24:04  /  2021/04/23 17:24:13 @cclarice    #
#                                                                              #
# **************************************************************************** #

# Name of library binary
NAME	=	mprintf.a

# Main for test run
MAIN	=	src/main.c

# Header
HEAD	=	src/mprintf.h

# Sources
SRCS	=	mprintf.c \
			mp_parcer.c \
			mp_putstr.c

SRCD	=	$(addprefix src/, $(SRCS))

OBJS	=	$(patsubst src/%.c, obj/%.o, $(SRCD))

OBJD	=	obj

CC		=	clang

MKDIR	=	mkdir

FLAG	=	-Wall -Wextra -Werror

all:		$(OBJD)

$(OBJD):
		@echo '\033[32m [=        ]$\033[0m Start'
		@$(MKDIR) $@
		@echo '\033[32m [==       ]$\033[0m Obj dir created'
		@echo '$(OBJS)'

obj/%.o:	src/%.c
	$(CC) -g $(FLAG) -c $(OBJ)

$(NAME):	$(SRC_DIR) $(HEAD)
		echo 1
		ar rc $(NAME) $(OBJ)

main:		all
		%(CC) $(NAME) $(MAIN) -o main.out

clean:
		rm -rf $(OBJD)

fclean: clean
		rm -rf $(NAME)

re:		fclean all