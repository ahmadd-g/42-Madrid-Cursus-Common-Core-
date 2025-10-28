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
		  ft_split.c ft_strmapi.c ft_striteri.c ft_itoa.c

# Archivos objeto (.o)
OBJS	= $(SRCS:.c=.o)

# -------------------- #
#      COMPILATION     #
# -------------------- #

# Regla por defecto
all: $(NAME)

# Cómo crear la librería
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compila cada .c en su correspondiente .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# -------------------- #
#        CLEAN         #
# -------------------- #

# Borra archivos .o
clean:
	rm -f $(OBJS)

# Borra todo, incluida la librería o archivo programa
fclean: clean
	rm -f $(NAME)

# Limpia y recompila
re: fclean all

# Compila archivos extra opcionales sin afectar la compilación normal
bonus:
	@echo "Wait till I do the bonus part"

# .PHONY: indica que la/s regla/s no representa/n un archivo real
.PHONY: all clean fclean re bonus
