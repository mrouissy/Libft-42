NAME = lib

C = gcc

FLAG = -Wall -Wextra -Werror -I.

RM = rm -f

SRC =	main.c \
        ft_atoi.c \
        ft_bzero.c \
        ft_calloc.c \
        ft_isalnum.c \
        ft_isalpha.c \
        ft_isascii.c \
        ft_isdigit.c \
        ft_isprint.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_memcpy.c \
        ft_memmove.c \
        ft_memset.c \
        ft_strchr.c \
        ft_strdup.c \
        ft_strlcat.c \
        ft_strlcpy.c \
        ft_strlen.c \
        ft_strncmp.c \
        ft_strnstr.c \
        ft_strrchr.c \
        ft_tolower.c \
        ft_toupper.c \
        ft_substr.c \
        ft_strjoin.c \
        ft_strtrim.c \
        ft_strmapi.c \
        ft_striteri.c \
        ft_putchar_fd.c \
        ft_putstr_fd.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c \
        ft_itoa.c




all: $(NAME)

%.o:%.c libft.h
	$(C) $(FLAG) -c $< -o $@

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	@$(C) $(FLAG) $(OBJ) -o  $(NAME)
	@echo "succès"

clean:
	@$(RM)  $(OBJ)
	@echo "clean Done"

fclean : clean
	@$(RM) $(NAME)

re : clean all
