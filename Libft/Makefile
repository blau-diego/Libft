# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/25 19:50:54 by dierojas          #+#    #+#              #
#    Updated: 2026/07/13 16:16:07 by danielg3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = \
		booleans/ft_isalnum.c booleans/ft_isalpha.c booleans/ft_isascii.c booleans/ft_isdigit.c \
		booleans/ft_isprint.c booleans/ft_isspace.c booleans/ft_isupper.c\
		conversions/ft_atoi.c conversions/ft_itoa.c conversions/ft_tolower.c conversions/ft_toupper.c \
		memory/ft_bzero.c memory/ft_calloc.c memory/ft_memchr.c memory/ft_memcmp.c \
		memory/ft_memcpy.c memory/ft_memmove.c memory/ft_memset.c \
		mtx/ft_mtxdup.c mtx/ft_mtxfree.c mtx/ft_mtxlen.c mtx/ft_split.c \
		prints/ft_put_hexdec_fd.c prints/ft_put_unsnbr_fd.c prints/ft_putchar_fd.c \
		prints/ft_putendl_fd.c prints/ft_putnbr_fd.c prints/ft_putstr_fd.c \
		strings/ft_strchr.c strings/ft_strdup.c strings/ft_striteri.c strings/ft_strjoin.c \
		strings/ft_strlcat.c strings/ft_strlcpy.c strings/ft_strlen.c strings/ft_strmapi.c \
		strings/ft_strncmp.c strings/ft_strnstr.c strings/ft_strrchr.c strings/ft_strtrim.c \
		strings/ft_substr.c strings/ft_strcpyl.c

BSRCS = \
		lst/ft_lstnew.c lst/ft_lstadd_back.c lst/ft_lstadd_front.c lst/ft_lstclear.c \
		lst/ft_lstdelone.c lst/ft_lstiter.c lst/ft_lstlast.c lst/ft_lstmap.c \
		lst/ft_lstsize.c
PRINTSRCS = \
			prints/ft_putchar.c prints/ft_putstr.c prints/ft_putnbr.c \
			prints/ft_put_unsnbr.c prints/ft_put_hexdec.c prints/ft_printf_utils.c \
			prints/ft_printf.c
GNLSRCS = get_next_line/get_next_line.c get_next_line/get_next_line_bonus.c
OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)
PRINTFOBJS = $(PRINTSRCS:.c=.o)
GNLOBJS = $(GNLSRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar
ARFLAGS = rcs

all: $(NAME)

$(NAME): $(OBJS) $(BOBJS) $(PRINTFOBJS) $(GNLOBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus: $(BOBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

print: $(PRINTFOBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

gnl: $(GNLOBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

clean:
	rm -f $(OBJS) $(BOBJS) $(PRINTFOBJS) $(GNLOBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus print gnl
