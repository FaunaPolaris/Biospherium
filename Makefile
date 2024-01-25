NAME		=	Biospherium
MAIN		=	main.c

CC			=	gcc
C_FLAGS		=	-Wall -Wextra -Werror -g3 -ggdb

LIBFPP_DIR	=	libft/
INCLUDES	=	-I./includes/ -I$(LIBFPP_DIR)/header
LIBFPP		=	 -L$(LIBFPP_DIR) -lfpp

DNA_SRCS	=	new.c
DNA_SRCS	:=	$(addprefix sources/genes/DNA_, $(DNA_SRCS))

OBJS_DIR	=	objects
OBJS		=	$(addprefix $(OBJS_DIR)/, $(DNA_SRCS:.c=.o))

all: fpp_comp $(NAME) 

$(NAME): $(OBJS)
	@$(CC) $(C_FLAGS) $(OBJS) $(MAIN) $(INCLUDES) $(LIBFPP) -o $@ 

$(OBJS_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $< -o $@ $(INCLUDES) $(LIBFPP)

fpp_comp:
	@make -C libft memory.a
	@make -C libft graphics.a

clean:
	@rm -rf objects

fclean: clean
	@make -C libft fclean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all  clean fclean re
