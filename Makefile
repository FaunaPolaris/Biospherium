NAME		=	Biospherium
MAIN		=	main.c

CC			=	gcc
C_FLAGS		=	-Wall -Wextra -Werror -g3 -ggdb

LIBFPP_DIR	=	libft
INCLUDES	=	-I./includes/ -I./$(LIBFPP_DIR)/header
LIBFPP		=	 -L$(LIBFPP_DIR) -lfpp
GRAPH_LINK	=	libft/minilibx/libmlx.a -lX11 -lXext
MATH_LINK	=	-lm
LIBS_LINK	=	$(GRAPH_LINK) $(MATH_LINK)

DNA_SRCS	=	new.c
DNA_SRCS	:=	$(addprefix sources/genes/DNA_, $(DNA_SRCS))

OBJS_DIR	=	objects
OBJS		=	$(addprefix $(OBJS_DIR)/, $(DNA_SRCS:.c=.o))

all: fpp_comp $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(C_FLAGS) $(MAIN) $(INCLUDES) $^ $(LIBFPP) $(LIBS_LINK) -o $@

$(OBJS_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $< -o $@ $(INCLUDES) $(LIBFPP)

fpp_comp:
	@make -C libft memory.a
	@make -C libft check.a
	@make -C libft convert.a
	@make -C libft maths.a
	@make -C libft graphics.a

clean:
	@rm -rf objects

fclean: clean
	@make -C libft fclean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all  clean fclean re
