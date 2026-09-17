/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:40:37 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/17 03:14:31 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef MAX_FD
#  define MAX_FD 1024
# endif

#define FALSE 0
#define TRUE 1

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include <limits.h>

/* BOOLS FUNC */

int		ft_endwith(char *str, char *suffix);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_startwith(char *str, char *prefix);

/* CONVERSION FUNC */

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
int		ft_tolower(int c);
int		ft_toupper(int c);

/* LISTS FUNC */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

/* MEMORY FUNC */

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_realloc(void *ptr, size_t old, size_t new);
void	ft_swap(char *a, char *b);

/* MTX FUNC */

char	*ft_mtxchr(char **mtx, int c);
char	**ft_mtxdup(char **mtx);
void	ft_mtxfree(char **mtx);
void	ft_mtxiteri(char **mtx, void (*function)(unsigned int, char **));
char	**ft_mtxjoin_str(char **mtx, char *s);
char	**ft_mtxjoin(char **mtx1, char **mtx2);
size_t	ft_mtxlen(char **mtx);
char	**ft_mtxnew(size_t size);
char	*ft_mtxrchr(char **mtx, int c);
char	*ft_mtxrstr(char **mtx, char *str);
char	*ft_mtxstr(char **mtx, char *str);
char	**ft_mtxtrim(char **mtx, char **set);
char	**ft_submtx(char **mtx, unsigned int start, size_t len);

/* PRINTS FUNC */

int		ft_hexdec_aux(char const *s, va_list args);
int		ft_pointer_aux(va_list args);
int		ft_putchar_aux(va_list args);
int		ft_putnbr_aux(char const *s, va_list args);
int		ft_putstr_aux(va_list args);
int		ft_printf(char const *s, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_put_unsnbr_fd(unsigned int n, int fd);
void	ft_put_hexdec_fd(unsigned long long nb, int bool, int fd);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_put_unsnbr(unsigned int n);
int		ft_put_hexdec(unsigned long long nb, int m);
void	ft_putfilter(char *text, char *filter, char filter_char);

/* GET LINE FUNC */

char	*get_next_line(int fd);
char	*get_next_line_bonus(int fd);

/* STRING FUNC */

int		ft_chrscount(char *str, int c);
char	*ft_filter(char *text, char *filter, char fil_char);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpyl(char *dst, const char *src, size_t len);
char	*ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);








#endif
