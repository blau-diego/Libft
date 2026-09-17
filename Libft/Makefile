# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/25 19:50:54 by dierojas          #+#    #+#              #
#    Updated: 2026/09/16 14:49:00 by dierojas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar
ARFLAGS = rcs

BOOLSRCS = \
	booleans/ft_endwith.c \
	booleans/ft_isalnum.c \
	booleans/ft_isalpha.c \
	booleans/ft_isascii.c \
	booleans/ft_isdigit.c \
	booleans/ft_isprint.c \
	booleans/ft_isspace.c \
	booleans/ft_isupper.c \
	booleans/ft_startwith.c

CONVSRCS = \
	conversions/ft_atoi.c \
	conversions/ft_itoa.c \
	conversions/ft_tolower.c \
	conversions/ft_toupper.c \
	conversions/ft_split.c

LSTSRCS = \
	lst/ft_lstnew.c \
	lst/ft_lstadd_back.c \
	lst/ft_lstadd_front.c \
	lst/ft_lstclear.c \
	lst/ft_lstdelone.c \
	lst/ft_lstiter.c \
	lst/ft_lstlast.c \
	lst/ft_lstmap.c \
	lst/ft_lstsize.c

MEMSRCS = \
	memory/ft_bzero.c \
	memory/ft_calloc.c \
	memory/ft_memchr.c \
	memory/ft_memcmp.c \
	memory/ft_memcpy.c \
	memory/ft_memmove.c \
	memory/ft_memset.c

MTXSRCS = \
	mtx/ft_mtxchr.c \
	mtx/ft_mtxdup.c \
	mtx/ft_mtxfree.c \
	mtx/ft_mtxiteri.c \
	mtx/ft_mtxjoin_str.c \
	mtx/ft_mtxjoin.c \
	mtx/ft_mtxlen.c \
	mtx/ft_mtxnew.c \
	mtx/ft_mtxrchr.c \
	mtx/ft_mtxrstr.c \
	mtx/ft_mtxstr.c \
	mtx/ft_mtxtrim.c \
	mtx/ft_submtx.c

PRINTSRCS = \
	prints/ft_printf_utils.c \
	prints/ft_printf.c \
	prints/ft_put_hexdec_fd.c \
	prints/ft_put_hexdec.c \
	prints/ft_put_unsnbr_fd.c \
	prints/ft_put_unsnbr.c \
	prints/ft_putchar_fd.c \
	prints/ft_putchar.c \
	prints/ft_putendl_fd.c \
	prints/ft_putfilter.c \
	prints/ft_putmtx.c \
	prints/ft_putnbr_fd.c \
	prints/ft_putnbr.c \
	prints/ft_putstr_fd.c \
	prints/ft_putstr.c

RLNSRCS = \
	read_lines/get_next_line.c \
	read_lines/get_next_line_bonus.c

STRSRCS = \
	strings/ft_strchr.c \
	strings/ft_strdup.c \
	strings/ft_striteri.c \
	strings/ft_strjoin.c \
	strings/ft_strlcat.c \
	strings/ft_strlcpy.c \
	strings/ft_strlen.c \
	strings/ft_strmapi.c \
	strings/ft_strncmp.c \
	strings/ft_strnstr.c \
	strings/ft_strrchr.c \
	strings/ft_strtrim.c \
	strings/ft_substr.c \
	strings/ft_strcpyl.c

BOOLOBJS = $(BOOLSRCS:.c=.o)
CONVOBJS = $(CONVSRCS:.c=.o)
LSTOBJS = $(LSTSRCS:.c=.o)
MEMOBJS = $(MEMSRCS:.c=.o)
MTXOBJS = $(MTXSRCS:.c=.o)
PRINTOBJS = $(PRINTSRCS:.c=.o)
RLNOBJS = $(RLNSRCS:.c=.o)
STROBJS = $(STRSRCS:.c=.o)

OBJS = \
	$(BOOLOBJS) \
	$(CONVOBJS) \
	$(LSTOBJS) \
	$(MEMOBJS) \
	$(MTXOBJS) \
	$(PRINTOBJS) \
	$(RLNOBJS) \
	$(STROBJS)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bools: $(BOOLOBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

conversions: $(CONVOBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

lst: $(LSTOBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

memory: $(MEMOBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

mtx: $(MTXOBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

prints: $(PRINTOBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

lines: $(RLNOBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

strings: $(STROBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bools conversions lst memory mtx prints lines strings
