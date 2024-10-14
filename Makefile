NAME = cns_str
CC = gcc
FLAGS = -Werror -Wextra -Wall -I./inc
RM = rm -f

SOURCE = cns_strcpy.c  \
         cns_strncpy.c \
         cns_strlcpy.c \
		 cns_strdup.c  \
		 cns_strchr.c  \
		 cns_strrchr.c \
		 cns_strcmp.c  \
		 cns_strncmp.c \
		 cns_strstr.c  \
		 cns_strtrim.c \
		 cns_substr.c  \
		 cns_strlen.c

OBJS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
