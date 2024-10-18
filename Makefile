NAME = libft.a

SOURCES = 			\
	ft_strlen.c 	\
	ft_isdigit.c 	\
	ft_isprint.c 	\
	ft_isalpha.c 	\
	ft_isascii.c 	\
	ft_toupper.c 	\
	ft_tolower.c 	\
	ft_strncmp.c 	\
	ft_isalnum.c 	\
	ft_memset.c 	\
	ft_bzero.c 		\
	ft_memcpy.c		\
	ft_memmove.c	\
	ft_strlcpy.c 	\
	ft_strchr.c		\
	ft_strlcat.c 	\
	ft_putchar_fd.c	\
	ft_strrchr.c 	\
	ft_memchr.c 	\

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re