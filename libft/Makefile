# Nombre del ejecutable
NAME = libft.a

# Lista archivos fuentes
SRCS = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_atoi.c ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strnstr.c ft_strncmp.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putchar_fd.c ft_memset.c ft_itoa.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strmapi.c ft_striteri.c ft_calloc.c ft_strdup.c ft_split.c

# Genera archivos .o automáticamente a partir de los .c
OBJS = $(SRCS:.c=.o)

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Regla por defecto al hacer "make"
all: $(NAME)

# Cómo compilar el ejecutable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Borra archivos .o
clean:
	rm -f $(OBJS)

# Borra todo, incluso el ejecutable
fclean: clean
	rm -f $(NAME)

# Limpia y recompila todo
re: fclean all
