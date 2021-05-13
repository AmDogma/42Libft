NAME = libft.a

FILES = 	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_memccpy.c ft_strlen.c ft_isalpha.c \
			ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
			ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_isdigit.c

FILES_B = 	ft_lstmap.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstnew.c \
			ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c

FLAGS = -Wall -Werror -Wextra

OBJ = $(patsubst %.c,%.o,$(FILES))

OBJ_B = $(patsubst %.c,%.o,$(FILES_B))

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

bonus : $(OBJ_B) $(OBJ)
	ar rcs $(NAME) $?

clean :
	/bin/rm -f $(OBJ) $(OBJ_B)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus

#norm :
#	norminette -R CheckForbiddenSourceHeader */*.[ch]