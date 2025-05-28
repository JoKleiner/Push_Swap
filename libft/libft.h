/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:01:27 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 14:23:14 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	long			num;
	struct s_list	*next;
	struct s_list	*prev;
	int				index;
	int				push_cost;
	int				switch_case;
}					t_list;

// ft_print
# define HEX_LOW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"
int					ft_printf(const char *arg, ...);
int					percent_found(va_list arg_list, char cha);
int					case_xx(unsigned int numunsign, char cha);
int					hex_for_xx(unsigned int numunsign, char *buffer, char cha);
int					case_u(unsigned int numunsign);
int					case_p(size_t num);
int					ft_putchar_printf(char cha);

// get_next_line
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif
char				*get_next_line(int fd);
int					get_next_line_2(char **line, char *temp, char *buffer,
						int bytes_num);
char				*expand_line(char **line, char *buffer, int i);
char				*init_temp(char *temp, char **line, char **buffer);
void				free_str(char **str);


// Memory Functionos

void				ft_bzero(void *str, size_t num);
void				*ft_calloc(size_t num, size_t size);
void				*ft_memset(void *str, int cha, size_t len);
void				*ft_memchr(const void *str, int cha, size_t num);
int					ft_memcmp(const void *str1, const void *str2, size_t num);
void				*ft_memcpy(void *dst, const void *src, size_t num);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				ft_memfree(char **wordptr, size_t i);


// Linked List

t_list				*ft_lstnew(long number);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst);


// Convert Functions

int					ft_atoi(const char *str);
char				*ft_itoa(int n);
int					ft_tolower(int cha);
int					ft_toupper(int cha);


// String Functions

size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *str);
char				*ft_strndup(const char *str, size_t len);
char				*ft_strjoin(char const *str1, char const *str2);
char				*ft_strjoin_free(char *s1, char const *s2);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstlen);
char				**ft_split(char const *str, char cha);
char				*ft_strchr(const char *str, int cha);
void				ft_striteri(char *str, void (*f)(unsigned int, char *));
size_t				ft_strlcat(char *dst, const char *src, size_t len);
char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int					ft_strncmp(const char *src1, const char *src2, size_t num);
char				*ft_strnstr(const char *src, const char *search,
						size_t len);
char				*ft_strrchr(const char *src, int find);
char				*ft_strtrim(char const *str, char const *set);
char				*ft_substr(char const *str, unsigned int start, size_t len);


// Output Functions

int					ft_putchar_fd(char cha, int fd);
long				ft_putstr_fd(char *str, int fd);
void				ft_putendl_fd(char *str, int fd);
int					ft_putnbr_fd(int num, int fd);
int					ft_putstr_rev_fd(char *str, int fd);

// Check Functions

int					ft_isalnum(int cha);
int					ft_isalpha(int cha);
int					ft_isascii(int cha);
int					ft_isdigit(int num);
int					ft_isprint(int cha);

#endif
