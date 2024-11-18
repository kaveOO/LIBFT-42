NAME = libft.a

SOURCES = 			\
	str/ft_strlen.c 	\
	str/ft_strmapi.c 	\
	str/ft_striteri.c 	\
	str/ft_strnstr.c 	\
	str/ft_strjoin.c 	\
	str/ft_strtrim.c 	\
	str/ft_strlcpy.c 	\
	str/ft_strchr.c		\
	str/ft_strlcat.c 	\
	str/ft_strdup.c		\
	str/ft_substr.c 	\
	str/ft_toupper.c 	\
	str/ft_tolower.c 	\
	str/ft_strncmp.c 	\
	str/ft_strrchr.c 	\
						\
	is/ft_isdigit.c 	\
	is/ft_isprint.c 	\
	is/ft_isalpha.c 	\
	is/ft_isascii.c 	\
	is/ft_isalnum.c 	\
	mem/ft_memset.c 	\
	mem/ft_bzero.c 		\
	mem/ft_memcpy.c		\
	mem/ft_memmove.c	\
	put/ft_putchar_fd.c	\
	mem/ft_memchr.c 	\
	mem/ft_memcmp.c 	\
	convert/ft_atoi.c 		\
	mem/ft_calloc.c 	\
	put/ft_putstr_fd.c 	\
	put/ft_putendl_fd.c	\
	put/ft_putnbr_fd.c 	\
	convert/ft_split.c 		\
	convert/ft_itoa.c 		\

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
