NAME = philo

INC = /include/philo.h

CFLAGS = -Wall -Werror -Wextra -pthread

AR = ar -rc

SRCS =	src/philo.c \
		src/utils.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o: %.c $(INC)
		$(AR) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY all clean fclean re
