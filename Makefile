NAME = libasm.a

FILES = ft_strlen.s\
	   ft_strcmp.s\
	   ft_strcpy.s\
	   ft_write.s\
	   ft_read.s\
	   ft_strdup.s

SRCS = $(addprefix srcs/, $(FILES))
OBJS = $(SRCS:.s=.o)

NA = nasm

NA_FLAGS = -f macho64

%.o: %.s
	$(NA) $(NA_FLAGS) $<

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	rm -rf a.out

re : fclean all
