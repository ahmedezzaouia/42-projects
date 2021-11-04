NAME = 	libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c  ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c

OBJS	:=$(SRCS:.c=.o)

BONUS_OBJS	:=$(BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.PHONY:	all clean fclean re

all : $(NAME)

bonus : $(BONUS_OBJS) $(OBJS)
	ar -rcs $(NAME) $(BONUS_OBJS) $(OBJS)

${NAME} : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o :	%.c
	gcc $(CFLAGS) -c $<   -o $@

clean :
	/bin/rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all