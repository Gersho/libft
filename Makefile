SRCS	= ft_isalnum.c ft_memccpy.c ft_memset.c ft_strncmp.c fr_strchr.c ft_isalpha.c \
ft_strnstr.c ft_atoi.c ft_isascii.c ft_strlcat.c ft_strrchr.c ft_bzero.c \
ft_isdigit.c ft_memcpy.c ft_strlcpy.c ft_tolower.c ft_isprint.c ft_strlen.c \
ft_toupper.c

OBJS	= $(SRCS:.c=.o)

NAME	= libft.a
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -g
AR		= ar -cr

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all: 		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all