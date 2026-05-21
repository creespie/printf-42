*This project has been created as part of the 42 curriculum by lurossi.*

# Libft

## Description

Libft is the first project of the 42 curriculum.  
The goal of this project is to recreate a custom C library by reimplementing standard libc functions, along with additional utility functions that will be reused in future projects.

This library includes:

- Standard libc function reimplementations
- Memory and string manipulation utilities
- Output functions
- Linked list management functions
- Additional helper functions

The project is written in C and follows the 42 Norminette coding standard.

---

# Library Overview

## Mandatory Functions

### Character Checks

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`

### String Functions

- `ft_strlen`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strdup`

### Memory Functions

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### Conversion Functions

- `ft_atoi`
- `ft_itoa`

### String Utilities

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

### File Descriptor Output

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

---

# Bonus Functions

The bonus part introduces linked list management using the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
