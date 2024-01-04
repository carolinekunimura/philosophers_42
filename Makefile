NAME = philo.a

CFLAGS = -Wall -Werror -Wextra

AR = ar -rc

SRCS = philo.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY all clean fclean re
