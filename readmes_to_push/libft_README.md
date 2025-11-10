# Libft

A custom C library implementation - 42 School Project

## Overview

Libft is the first project at 42 School, where students recreate essential functions from the C standard library along with additional utility functions. This library serves as a foundation for future C projects at 42, providing a personal toolkit of reliable, well-tested functions.

## Description

This project involves recoding a set of standard C library functions (from `libc`) as well as other utility functions that will be useful throughout the cursus. The library is compiled into a static library `libft.a` that can be linked with other C projects.

## Features

### Part 1: Libc Functions
Standard C library functions reimplemented with the `ft_` prefix:

**Character Classification & Conversion:**
- `ft_isalpha` - Check if character is alphabetic
- `ft_isdigit` - Check if character is a digit
- `ft_isalnum` - Check if character is alphanumeric
- `ft_isascii` - Check if character is ASCII
- `ft_isprint` - Check if character is printable
- `ft_toupper` - Convert character to uppercase
- `ft_tolower` - Convert character to lowercase

**String Manipulation:**
- `ft_strlen` - Calculate string length
- `ft_strlcpy` - Size-bounded string copy
- `ft_strlcat` - Size-bounded string concatenation
- `ft_strchr` - Locate first occurrence of character
- `ft_strrchr` - Locate last occurrence of character
- `ft_strncmp` - Compare strings up to n bytes
- `ft_strnstr` - Locate substring in string
- `ft_strdup` - Duplicate string

**Memory Functions:**
- `ft_memset` - Fill memory with constant byte
- `ft_bzero` - Zero out memory
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (handles overlap)
- `ft_memchr` - Scan memory for character
- `ft_memcmp` - Compare memory areas
- `ft_calloc` - Allocate and zero memory

**Conversion:**
- `ft_atoi` - Convert string to integer

### Part 2: Additional Functions
Custom utility functions for string manipulation:

- `ft_substr` - Extract substring from string
- `ft_strjoin` - Concatenate two strings
- `ft_strtrim` - Trim characters from beginning and end
- `ft_split` - Split string by delimiter
- `ft_itoa` - Convert integer to string
- `ft_strmapi` - Apply function to each character (with index)
- `ft_striteri` - Iterate and apply function to each character

**File Descriptor Output:**
- `ft_putchar_fd` - Output character to file descriptor
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl_fd` - Output string with newline to file descriptor
- `ft_putnbr_fd` - Output number to file descriptor

### Bonus Part: Linked List Functions

Functions for manipulating linked lists using the `t_list` structure:

- `ft_lstnew` - Create new list element
- `ft_lstadd_front` - Add element at beginning of list
- `ft_lstadd_back` - Add element at end of list
- `ft_lstsize` - Count elements in list
- `ft_lstlast` - Get last element of list
- `ft_lstdelone` - Delete single element
- `ft_lstclear` - Delete and free list
- `ft_lstiter` - Iterate and apply function to each element
- `ft_lstmap` - Iterate and apply function, create new list

## Installation & Compilation

### Requirements
- GCC compiler
- Make

### Compilation

To compile the mandatory part:
```bash
make
```

To compile with bonus functions:
```bash
make bonus
```

This will create the static library `libft.a`.

### Cleaning

Remove object files:
```bash
make clean
```

Remove object files and the library:
```bash
make fclean
```

Recompile everything:
```bash
make re
```

## Usage

1. Compile the library:
```bash
make
```

2. Include the header in your C file:
```c
#include "libft.h"
```

3. Compile your program with the library:
```bash
gcc your_program.c libft.a -o your_program
```

### Example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, 42!";
    char *dup;

    dup = ft_strdup(str);
    ft_putendl_fd(dup, 1);
    free(dup);

    return (0);
}
```

## Technical Details

- **Language:** C
- **Compiler:** GCC
- **Compilation Flags:** `-Wall -Wextra -Werror`
- **Norm:** 42 School coding standard (Norminette)
- **Forbidden:**
  - Global variables
  - Using functions not allowed in the subject

## Project Structure

```
libft/
├── Makefile          # Build configuration
├── libft.h           # Header file with function prototypes
├── ft_*.c            # Implementation files (45+ functions)
└── README.md         # This file
```

## About 42 School

This project is part of the 42 School curriculum. 42 is a coding school with a peer-to-peer learning approach and project-based curriculum.

## Author

**bmetehri** - 42 Student

Project completed: January 2023
