# Libft

*This project has been created as part of the 42 curriculum by mjaafar.*

## Description

Libft is the first project of the 42 Common Core. The goal is to write my own C library: a collection of general-purpose functions that I will reuse in the next projects of the curriculum.

The project has three parts:

- **Part 1 - Libc functions:** My own versions of standard C library functions (`strlen`, `memcpy`, `atoi`, `calloc`...), with the same prototypes and behavior, prefixed with `ft_`.
- **Part 2 - Additional functions:** Functions that are not in the libc, or exist in a different form (`ft_substr`, `ft_split`, `ft_itoa`...).
- **Part 3 - Linked lists:** Functions to create and manipulate a singly linked list built on the `t_list` structure.

The result is a static library, `libft.a`, written in C in accordance with the 42 Norm. The only external functions used are `malloc`, `free` and `write`.

## Instructions

### Compilation

```bash
make          # builds libft.a
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # rebuilds everything
```

The files are compiled with `cc` and the flags `-Wall -Wextra -Werror`.

### Using the library in a program

Include the header in your source file:

```c
#include "libft.h"
```

Then compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

Or simply:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o my_program
```

## Library Description

### Part 1 - Libc Functions

| Function | Description |
|---|---|
| `ft_isalpha` | Returns 1 if the character is a letter, 0 otherwise. |
| `ft_isdigit` | Returns 1 if the character is a digit, 0 otherwise. |
| `ft_isalnum` | Returns 1 if the character is a letter or a digit, 0 otherwise. |
| `ft_isascii` | Returns 1 if the value is in the ASCII table (0 to 127), 0 otherwise. |
| `ft_isprint` | Returns 1 if the character is printable (32 to 126), 0 otherwise. |
| `ft_strlen` | Returns the length of a string. |
| `ft_memset` | Fills `n` bytes of memory with a given byte. |
| `ft_bzero` | Sets `n` bytes of memory to zero. |
| `ft_memcpy` | Copies `n` bytes from one memory area to another. |
| `ft_memmove` | Copies `n` bytes, and works even if the areas overlap. |
| `ft_strlcpy` | Copies a string into a buffer of a given size, always null-terminated when the size is greater than zero. |
| `ft_strlcat` | Appends a string to a buffer of a given total size. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares at most `n` characters of two strings. |
| `ft_memchr` | Finds a byte in the first `n` bytes of a memory area. |
| `ft_memcmp` | Compares the first `n` bytes of two memory areas. |
| `ft_strnstr` | Finds a substring within the first `len` characters of a string. |
| `ft_atoi` | Converts a string to an integer. |
| `ft_calloc` | Allocates memory for an array and sets it to zero. |
| `ft_strdup` | Returns a newly allocated copy of a string. |

### Part 2 - Additional Functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a newly allocated part of a string. |
| `ft_strjoin` | Returns a new string made of two strings joined together. |
| `ft_strtrim` | Returns a copy of a string without the given characters at both ends. |
| `ft_split` | Splits a string into an array of words, using a delimiter character. |
| `ft_itoa` | Converts an integer to a newly allocated string. |
| `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_striteri` | Applies a function to each character of a string, in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Part 3 - Linked Lists

The list functions use this structure, declared in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstsize` | Returns the number of nodes in a list. |
| `ft_lstlast` | Returns the last node in a list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstdelone` | Deletes one node, using a function to free its content. |
| `ft_lstclear` | Deletes a whole list and sets its pointer to NULL. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to the content of each node. |

## Resources

### References

- Linux manual pages of the original functions (`man 3 strlen`, `man 3 memmove`, `man 3 strlcpy`, `man 3 calloc`...).
- The 42 Norm (version used by Norminette).

### Use of AI

I used an AI assistant (Claude, by Anthropic) as a learning aid during this project:

- **Explanations:** Understanding what each function must do, its edge cases, and new concepts such as function pointers and linked lists.
- **Step-by-step plans and examples:** For the harder functions, the AI provided plans, hints, and in some cases example solutions to study.
- **Testing and debugging:** The AI generated a test program that I ran on my functions and provided hints when tests failed.

I rewrote the functions myself after studying them, and I can explain every line of the code in this repository.

## Languages

- C
- Makefile
