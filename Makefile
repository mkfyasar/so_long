LIBFTPATH	= library/libft

NAME		= so_long
HEADER		= includes/so_long.h


# For MacOS
MINILIBX	= library/minilibx_opengl/


CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -f
ECHO		= echo
NORMINETTE := norminette

SOURCE :=  src/*c library/libft/*c includes/*h


# For MacOS
OPENGL		= -framework OpenGL -framework AppKit

# For MacOS
MINILIBXCC	= -I mlx -L $(MINILIBX) -lmlx


COMPILEPRM	= $(MINILIBXCC) $(OPENGL) -o $(NAME) libft.a $(MINILIBX)/libmlx.a
MANDATORYFILES	= $(shell find src -name "*.c")
MANDATORYOBJ	=	$(MANDATORYFILES:.c=.o)

all:		$(NAME)
$(NAME):	$(MANDATORYFILES)
			@echo "\033[0;33mMinilibx Library İs Compiling...\033[0m"
			@make -s -C $(MINILIBX) 2> /dev/null
			@echo "\033[0;33mLibft Library İs Compiling...\033[0m"
			@make -C $(LIBFTPATH) 2> /dev/null
			@cp $(LIBFTPATH)/libft.a .
			@$(CC) $(CFLAGS) $(MANDATORYFILES) $(COMPILEPRM)
			@echo  "\033[0;32mDONE!\033[0m"
clean:
			@$(RM) -r $(MANDATORYOBJ) 2> /dev/null
			@make clean -C $(MINILIBX) 2> /dev/null
			@make clean -C $(LIBFTPATH) 2> /dev/null
fclean:		clean
			@$(RM) -rf $(LIBFTPATH)/libft.a
			@$(RM) -r $(NAME)
			@$(RM) -rf libft.a
re:			fclean all
norm:
	$(NORMINETTE) $(SOURCE)
			
.PHONY:		all clean fclean re norm