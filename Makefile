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
#    Created/Updated: 2021/04/24 18:41:24  /  2021/04/24 18:41:32 @cclarice    #
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

# Sources Folder
SRCF	=	src/

# Sources with prefix "src/" mprintf.c -> src/mprintf.c
SRCD	=	$(addprefix $(SRCF), $(SRCS))

# Objects with prefix "obj/" mprintf.c -> obj/mprintf.o
OBJS	=	$(patsubst src/%.c, obj/%.o, $(SRCD))

# Objects folder
OBJD	=	obj

# Compiler command
CC		=	clang

# Creating directory comand
MKDIR	=	mkdir

# Compiler flag
FLAG	=	-Wall -Wextra -Werror -O3

# Count of comands


all:		$(OBJD) $(NAME)

$(OBJD):
		@echo -e 'Make:'
		@echo -ne '\033[32m [\033[s     ]\033[0m'
		@$(MKDIR) $@
		@echo -ne '\033[u=\033[s\033[3;20H\033[0m $(OBJD) dir created       '

obj/%.o:	src/%.c
		@$(CC) $(FLAG) -c $< -o $@
		@echo -ne '\033[u=\033[s\033[3;20H\033[0m $< compiled               '

$(NAME):	$(OBJS) $(HEAD)
		@ar rc $(OBJ) $(NAME)
		@echo -e '\033[u=\033[s\033[3;20H\033[0m $(NAME) compiled           '

main:		all
		$(CC) $(NAME) $(MAIN) -o main.out

clean:
		rm -rf $(OBJD)

fclean: clean
		rm -rf $(NAME)

re:		fclean all
