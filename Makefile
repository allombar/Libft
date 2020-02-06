NAME = libft.a

SRCDIR      =   ./srcs/

SRCS = 	ft_atoi.c\
		ft_bzero.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memccpy.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_strdup.c\
		ft_calloc.c

OBJS = $(SRCS:.c=.o)

all:
		@echo "Compilation du programme"
		@gcc -Werror -Wall -Wextra ${addprefix $(SRCDIR), $(SRCS) } -c
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)

clean:
		@echo "The files have been deleted"
		@rm -rf $(OBJS)

fclean: clean
		@echo "+ delete prog"
		@rm -rf $(NAME)

r: fclean
		@echo "+ delete prog"
		@rm -rf a.out	

re:		fclean all

.PHONY: all clean fclean re