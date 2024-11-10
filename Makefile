NAME  = libft.a 
SRC = ft_isalpha.c ft_isdigit.c  ft_isalnum.c  ft_isascii.c\
		ft_isprint.c ft_strlen.c  ft_memset.c ft_bzero.c\
		ft_memcpy.c  ft_memmove.c ft_strlcpy.c ft_strchr.c\
		ft_tolower.c ft_toupper.c ft_strrchr.c ft_strchr.c\
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
		ft_calloc.c ft_strdup.c ft_atoi.c ft_strlcat.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c\

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c\
		ft_lstsize_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = ${SRC:.c=.o}
OBJS_BONUS = ${BONUS:.c=.o}
AR = ar -rc 
CC = cc -Wall -Wextra -Werror  
RM = rm -f    

%.o: %.c libft.h
	${CC} -c $<

${NAME}: ${OBJS} 
	${AR} ${NAME} ${OBJS} 
re: fclean all

clean:
	${RM} ${OBJS} ${OBJS_BONUS}

bonus: ${OBJS_BONUS}
	${AR} ${NAME} ${OBJS_BONUS}


fclean: clean
	${RM} ${NAME} 


all: ${NAME}