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
|  [ft_memset](/ft_atoi.c)  |  fills  the  first  n  bytes of the memory area pointed to by s with the constant byte c. |
|  [ft_bzero](/ft_bzero.c) |  erases  the  data  in the n bytes of the memory starting at the location pointed to by s, by writing zeroes (bytes containing '\0') to that area. |
|  [ft_memcpy](/ft_memcpy.c) |  copies  n bytes from memory area src to memory area dest.  The memory areas must not overlap. |
|  [ft_memccpy](/ft_memccpy.c) |  copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found. |
|  [ft_memmove](/ft_memmove.c) |  function  copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does notoverlap src or dest, and the bytes are then copied from the temporary array to dest. |
|  [ft_memchr](/ft_memchr.c) |  scans  the  initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the  bytes  of the memory area pointed to by s are interpreted as unsigned char. |
|  [ft_memcmp](/ft_memcmp.c) |  returns  an  integer  less  than,  equal  to,  or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2. |
|  [ft_strlen](/ft_strlen.c) |  calculates the length of the string pointed to by s, excluding the terminating null byte ('\0'). |
|  [ft_strlcpy](/ft_strlcpy.c) | . |
|  [ft_strlcat](/ft_strlcat.c) | . |
|  [ft_strchr](/ft_strchr.c) |  returns a pointer to the first occurrence of the character c in the string s. |
|  [ft_strrchr](/ft_strrchr.c) |  returns a pointer to the last occurrence of  the character c in the string s. |
|  [ft_strnstr](ft_strnstr.c) |  Célula de conteúdo |
|  [ft_strncmp](/ft_strncmp.c) |  compares the two strings s1 and s2.  It returns an integer less than, equal to, or greater than zero if  s1  is  found, respectively, to be less than, to match, or be greater than s2. |
|  [ft_atoi](/ft_atoi.c) |  converts the initial portion of the string pointed to by nptr to int. |
|  [ft_isalpha](/ft_isalpha.c)[ft_isdigit](/ft_isdigit.c)[ft_isalnum](/ft_isalnum.c)[ft_isascii](/ft_isascii.c)[ft_isprint](/ft_isprint.c) |  check  whether  c,  which  must  have the value of an unsigned char or EOF, falls into a certain character class according to the  specified  locale. |
|  [ft_toupper](/ft_toupper.c)[ft_tolower](ft_tolower.c) |  convert lowercase letters to uppercase, and vice versa. |
|  [ft_calloc](/ft_calloc.c) |  allocates size bytes and returns a pointer to the allocated memory. |
|  [ft_strdup](/ft_strdup.c) |  returns  a  pointer to a new string which is a duplicate of the string s. |

##### SECOND SECTION

| Name  |  Descripton  |
| ------------------- | ------------------- |
|  [ft_substr](/ft_substr.c) |  Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’. |
|  [ft_strjoin](/ft_strjoin.c) |  Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. |
|  [ft_strtrim](/ft_strtrim.c) |  Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. |
|  [ft_split](/ft_split.c) |  Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer. |
|  [ft_itoa](/ft_itoa.c) |  Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled. |
|  [ft_strmapi](/ft_strmapi.c) |  Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’. |
|  [ft_putchar_fd](/ft_putchar_fd.c) |  Outputs the character ’c’ to the given file descriptor. |
|  [ft_putstr_fd](/ft_putstr_fd.c) |  Outputs the string ’s’ to the given file descriptor. |
|  [ft_putendl_fd](ft_putendl_fd.c) |  Outputs the string ’s’ to the given file descriptor, followed by a newline. |
|  [ft_putnbr_fd](ft_putnbr_fd.c) |  Outputs the integer ’n’ to the given file descriptor. |

##### BONUS SECTION

| Name  |  Descripton  |
| ------------------- | ------------------- |
|  [ft_lstnew](/ft_lstnew.c) | Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL. |
|  [ft_lstadd_front](/ft_lstadd_front.c) | Adds the element ’new’ at the beginning of the list. |
|  [ft_lstsize](/ft_lstsize.c) | Counts the number of elements in a list. |
|  [ft_lstlast](/ft_lstlast.c) | Returns the last element of the list. |
|  [ft_lstadd_back](/ft_lstadd_back.c) | Adds the element ’new’ at the end of the list. |
|  [ft_lstdelone](/ft_lstdelone.c) | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed. |
|  [ft_lstclear](/ft_lstclear.c) | Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL. |
|  [ft_lstiter](/ft_lstiter.c) | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. |
|  [ft_lstmap](/ft_lstmap.c) | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed. |

## Built with

* [Vim](https://www.vim.org/) - Text editor
* [GNU Compiler Collection](https://gcc.gnu.org/) - Gcc to compile
* [Libftest](https://github.com/jtoty/Libftest) - Script test to check functions automatically

## Author

* **[Caio Vinicius](https://github.com.br/caio-vinicius)**
