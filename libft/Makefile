# **************************************************************************** #
#                                   LIBFT                                      #
# **************************************************************************** #

# Nombre del ejecutable (en este caso, biblioteca)
NAME	= libft.a

# Compilador y flags
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

# Lista de archivos fuente
SRCS	= ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		  ft_atoi.c ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_strchr.c \
		  ft_tolower.c ft_toupper.c ft_strnstr.c ft_strncmp.c \
		  ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putchar_fd.c \
		  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strrchr.c \
		  ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c \
		  ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c ft_itoa.c

# Parte bonus (listas)
BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c \
 			 ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c ft_lstiter_bonus.c

# Archivos objeto (.o)
OBJS	= $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# -------------------- #
#      COMPILATION     #
# -------------------- #

# Regla por defecto
all: $(NAME)

# Cómo crear la librería
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compila archivos extra opcionales sin afectar la compilación normal
bonus: $(OBJS) $(BONUS_OBJS)
	@echo "Compilando la partecita bonus..sshh un momento por favor (I'm cooking)..."
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Compila cada .c en su correspondiente .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# -------------------- #
#        CLEAN         #
# -------------------- #

# Borra archivos .o
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Borra todo, incluida la librería o archivo programa
fclean: clean
	rm -f $(NAME)

# Limpia y recompila
re: fclean all

# .PHONY: indica que la/s regla/s no representa/n un archivo real
.PHONY: all clean fclean re bonus
