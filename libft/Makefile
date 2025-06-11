
NAME 		= libft.a
CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror

PRINTF_DIR	= printf
GNL_DIR		= get_next_line
LIST_DIR    = ft_list
MEMO_DIR    = ft_memo
STR_DIR     = ft_str
CONV_DIR    = ft_convert
CHECK_DIR   = ft_check
OUTPUT_DIR  = ft_output
OBJ_DIR		= obj

SRCS_PRINTF = $(addprefix $(PRINTF_DIR)/, 	ft_printf.c ft_case_xx.c ft_case_p_u.c)
SRCS_GNL	= $(addprefix $(GNL_DIR)/,		get_next_line.c get_next_line_utils.c)
SRCS_LIST   = $(addprefix $(LIST_DIR)/,		ft_lstnew.c ft_lstlast.c ft_lstclear.c ft_lstadd_back.c)
SRCS_MEMO   = $(addprefix $(MEMO_DIR)/,		ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_memfree.c)
SRCS_STR    = $(addprefix $(STR_DIR)/,		ft_strjoin_free.c ft_strjoin.c ft_split.c ft_strdup.c ft_strndup.c ft_strlen.c ft_strlcpy.c ft_strchr.c \
											ft_strrchr.c ft_strmapi.c ft_striteri.c ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_strlcat.c)
SRCS_CONV   = $(addprefix $(CONV_DIR)/, 	ft_atoi.c ft_itoa.c ft_toupper.c ft_tolower.c)
SRCS_CHECK  = $(addprefix $(CHECK_DIR)/, 	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c)
SRCS_OUTPUT = $(addprefix $(OUTPUT_DIR)/, 	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putstr_rev_fd.c)

SRCS	= $(SRCS_PRINTF) $(SRCS_GNL) $(SRCS_LIST) $(SRCS_MEMO) $(SRCS_STR) $(SRCS_CONV) $(SRCS_CHECK) $(SRCS_OUTPUT)
OBJS	= $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
TOTAL	= $(words $(SRCS))
COUNT	= 0

all: $(NAME)


$(NAME): $(OBJS)
	@printf "\033[1A\033[2KCreate $(NAME)... "
	@ar rcs $(NAME) $(OBJS)
	@printf "\033[0;32mcreated\033[0m\n"


$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(eval COUNT := $(shell echo $$(($(COUNT)+1))))
	@if [ $(COUNT) -eq 1 ]; then \
		printf "\n"; \
	fi
	@printf "\033[1ACompilen ($(COUNT)/$(TOTAL)) $<\n";
	@$(CC) $(CFLAGS) -c $< -o $@


clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
		printf "Clean $(NAME)... "; \
		rm -rf $(OBJ_DIR); \
		printf "\033[0;31mcleaned.\033[0m\n"; \
	fi

fclean: clean
	@if [ -f "$(NAME)" ]; then \
		printf "Remove $(NAME)... "; \
		rm -f $(NAME); \
		printf "\033[0;31mRemoved.\033[0m\n"; \
	fi

re: fclean all

.PHONY: all clean fclean re
