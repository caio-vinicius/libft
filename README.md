# libft
Library with some C functions 

## Getting Started

Just include the library on your C projects

```
#include "libft.h"
```

## Included functions
##### FIRST SECTION 

| Name  |  Descripton  |
| ------------------- | ------------------- |
|  [ft_memset](wwww.github.com/sfcaio/libft)  |  fills  the  first  n  bytes of the memory area pointed to by s with the constant byte c. |
|  [ft_bzero](wwww.github.com/sfcaio/libft) |  erases  the  data  in the n bytes of the memory starting at the location pointed to by s, by writing zeroes (bytes containing '\0') to that area. |
|  [ft_memcpy](github.com/sfcaio/libft) |  copies  n bytes from memory area src to memory area dest.  The memory areas must not overlap. |
|  [ft_memccpy](wwww.github.com/sfcaio/libft) |  copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found. |
|  [ft_memmove](wwww.github.com/sfcaio/libft) |  function  copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does notoverlap src or dest, and the bytes are then copied from the temporary array to dest. |
|  [ft_memchr](wwww.github.com/sfcaio/libft) |  scans  the  initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the  bytes  of the memory area pointed to by s are interpreted as unsigned char. |
|  [ft_memcmp](wwww.github.com/sfcaio/libft) |  returns  an  integer  less  than,  equal  to,  or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2. |
|  [ft_strlen](wwww.github.com/sfcaio/libft) |  calculates the length of the string pointed to by s, excluding the terminating null byte ('\0'). |
|  [ft_strlcpy](wwww.github.com/sfcaio/libft) |  Célula de conteúdo |
|  [ft_strlcat](wwww.github.com/sfcaio/libft) |  Célula de conteúdo |
|  [ft_strchr](wwww.github.com/sfcaio/libft) |  returns a pointer to the first occurrence of the character c in the string s. |
|  [ft_strrchr](wwww.github.com/sfcaio/libft) |  returns a pointer to the last occurrence of  the character c in the string s. |
|  [ft_strnstr](wwww.github.com/sfcaio/libft) |  Célula de conteúdo |
|  [ft_strncmp](wwww.github.com/sfcaio/libft) |  compares the two strings s1 and s2.  It returns an integer less than, equal to, or greater than zero if  s1  is  found, respectively, to be less than, to match, or be greater than s2. |
|  [ft_atoi](wwww.github.com/sfcaio/libft) |  converts the initial portion of the string pointed to by nptr to int. |
|  [ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint](wwww.github.com/sfcaio/libft) |  check  whether  c,  which  must  have the value of an unsigned char or EOF, falls into a certain character class according to the  specified  locale. |
|  [ft_toupper, ft_tolower](wwww.github.com/sfcaio/libft) |  convert lowercase letters to uppercase, and vice versa. |
|  [ft_calloc](wwww.github.com/sfcaio/libft) |  allocates size bytes and returns a pointer to the allocated memory. |
|  [ft_strdup](wwww.github.com/sfcaio/libft) |  returns  a  pointer to a new string which is a duplicate of the string s. |

##### SECOND SECTION

| Name  |  Descripton  |
| ------------------- | ------------------- |
|  [ft_substr](wwww.github.com/sfcaio/libft) |  Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’. |
|  [ft_strjoin](wwww.github.com/sfcaio/libft) |  Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. |
|  [ft_strtrim](wwww.github.com/sfcaio/libft) |  Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. |
|  [ft_split](wwww.github.com/sfcaio/libft) |  Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer. |
|  [ft_itoa](wwww.github.com/sfcaio/libft) |  Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled. |
|  [ft_strmapi](wwww.github.com/sfcaio/libft) |  Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’. |
|  [ft_putchar_fd](wwww.github.com/sfcaio/libft) |  Outputs the character ’c’ to the given file descriptor. |
|  [ft_putstr_fd](wwww.github.com/sfcaio/libft) |  Outputs the string ’s’ to the given file descriptor. |
|  [ft_putendl_fd](wwww.github.com/sfcaio/libft) |  Outputs the string ’s’ to the given file descriptor, followed by a newline. |
|  [ft_putnbr_fd](wwww.github.com/sfcaio/libft) |  Outputs the integer ’n’ to the given file descriptor. |

##### BONUS SECTION

| Name  |  Descripton  |
| ------------------- | ------------------- |
|  [ft_lstnew](wwww.github.com/sfcaio/libft) | . |
|  [ft_lstadd_front](wwww.github.com/sfcaio/libft) | . |
|  [ft_lstsize](wwww.github.com/sfcaio/libft) | . |
|  [ft_lstsize](wwww.github.com/sfcaio/libft) | . |
|  [ft_lstlast](wwww.github.com/sfcaio/libft) | . |
|  [ft_lstadd_back](wwww.github.com/sfcaio/libft) | . |
|  [ft_lstdelone](wwww.github.com/sfcaio/libft) | . |
|  [ft_lstclear](wwww.github.com/sfcaio/libft) | . |
|  [ft_lstiter](wwww.github.com/sfcaio/libft) | . |
|  [ft_lstmap](wwww.github.com/sfcaio/libft) | . |

## Built with

* [Vim](https://www.vim.org/) - Text editor
* [GNU Compiler Collection](https://gcc.gnu.org/) - Gcc to compile
* [Libftest](https://github.com/jtoty/Libftest) - Script test to check functions automatically

## Author

* **[Caio Vinicius](https://github.com.br/sfcaio)**
