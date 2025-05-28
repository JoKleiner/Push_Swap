
NAME			= push_swap
CC				= cc
CC_FLAGS		= -Wall -Werror -Wextra

LIBFT_DIR   	= libft
LIBFT       	= $(LIBFT_DIR)/libft.a
SRC_DIR         = src
OPERATOR_DIR	= operator
OBJ_DIR         = obj
HEADER          = push_swap.h

SRCS_PS		= $(addprefix $(SRC_DIR)/,		push_swap.c check_input.c push_in_a.c push_in_a_swc.c sorting_utils.c sorting_utils2.c)
SRCS_OP		= $(addprefix $(OPERATOR_DIR)/, swap.c push.c rotate.c re_rotate.c)

SRCS 		= $(SRCS_PS) $(SRCS_OP)
OBJS    	= $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
TOTAL	= $(words $(SRCS))
COUNT	= 0


all: $(NAME)


$(NAME): $(LIBFT) $(OBJS)
	@printf "\033[1A\033[2KCreate $(NAME)... "
	@$(CC) $(CC_FLAGS) -o $(NAME) $(OBJS) $(LIBFT) 
	@printf "\033[0;32mcreated\033[0m\n"

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: %.c $(HEADER)
	@mkdir -p $(dir $@)
	@$(eval COUNT := $(shell echo $$(($(COUNT)+1))))
	@if [ $(COUNT) -eq 1 ]; then \
		printf "\n"; \
	fi
	@printf "\033[1A\033[2KCompilen $< \t ($(COUNT)/$(TOTAL))\n";
	@$(CC) $(CC_FLAGS) -I$(LIBFT_DIR) -c $< -o $@


clean:
	@make -C $(LIBFT_DIR) clean
	@if [ -d "$(OBJ_DIR)" ]; then \
		printf "Clean $(NAME)... "; \
		rm -rf $(OBJ_DIR); \
		printf "\033[0;31mcleaned.\033[0m\n"; \
	fi
	

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	@if [ -f "$(NAME)" ]; then \
		printf "Remove $(NAME)... "; \
		rm -f $(NAME); \
		printf "\033[0;31mremoved.\033[0m\n"; \
	fi
	

re: fclean all

.PHONY: all clean fclean re
