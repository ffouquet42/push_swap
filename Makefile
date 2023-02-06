SRCS		=	srcs/push_swap.c								\
				srcs/verification/argv.c						\
				srcs/utils/print.c								\
				srcs/utils/tools.c								\
				srcs/utils/stack_handling.c						\
				srcs/setup/setup.c								\
				srcs/instructions/push.c						\
				srcs/instructions/reverse.c						\
				srcs/instructions/rotate.c						\
				srcs/instructions/swap.c						\

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

RM			=	rm -f

#CFLAGS		=	-Wall -Wextra -Werror
CFLAGS		=	

NAME		=	push_swap

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re