# ft_printf

A custom implementation of the printf function - 42 School Project

## Overview

ft_printf is a 42 School project that involves recoding the standard C library function `printf()`. This project teaches about variadic functions, parsing, and how one of the most used functions in C actually works under the hood.

## Description

The goal is to create a library containing a function `ft_printf()` that mimics the behavior of the original printf function from the C standard library. The function handles multiple format specifiers and returns the number of characters printed.

## Features

### Supported Conversions

The ft_printf function handles the following format specifiers:

- **%c** - Print a single character
- **%s** - Print a string
- **%p** - Print a pointer address in hexadecimal format
- **%d** - Print a signed decimal integer
- **%i** - Print a signed integer
- **%u** - Print an unsigned decimal integer
- **%x** - Print a number in lowercase hexadecimal format
- **%X** - Print a number in uppercase hexadecimal format
- **%%** - Print a percent sign

### Key Functions

- `ft_printf()` - Main function that formats and prints output
- `ft_exec_flag()` - Parses and executes format specifiers
- `ft_putchar()` - Outputs a single character
- `ft_putstr()` - Outputs a string
- `ft_putnbr()` - Outputs a signed integer
- `ft_putunbr()` - Outputs an unsigned integer
- `ft_print_in_hexa_min()` - Outputs lowercase hexadecimal
- `ft_print_in_hexa_max()` - Outputs uppercase hexadecimal
- `ft_print_void_p()` - Outputs pointer address

## Installation & Compilation

### Requirements
- GCC compiler
- Make

### Compilation

To compile the library:
```bash
make
```

This will create the static library `libftprintf.a`.

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
#include "ft_printf.h"
```

3. Compile your program with the library:
```bash
gcc your_program.c libftprintf.a -o your_program
```

### Example Usage

```c
#include "ft_printf.h"

int main(void)
{
    int num = 42;
    char *str = "Hello, World!";
    void *ptr = &num;

    // Print different types
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", str);
    ft_printf("Pointer: %p\n", ptr);
    ft_printf("Decimal: %d\n", num);
    ft_printf("Integer: %i\n", -42);
    ft_printf("Unsigned: %u\n", 42);
    ft_printf("Hex (lower): %x\n", 255);
    ft_printf("Hex (upper): %X\n", 255);
    ft_printf("Percent: %%\n");

    // Returns number of characters printed
    int ret = ft_printf("Test: %d\n", 123);
    ft_printf("Characters printed: %d\n", ret);

    return (0);
}
```

### Output
```
Character: A
String: Hello, World!
Pointer: 0x7ffd5c4a3b8c
Decimal: 42
Integer: -42
Unsigned: 42
Hex (lower): ff
Hex (upper): FF
Percent: %
Test: 123
Characters printed: 9
```

## Project Structure

```
ft_printf/
├── Makefile              # Build configuration
├── include/
│   └── ft_printf.h       # Header file with function prototypes
├── src/
│   ├── ft_printf.c       # Main ft_printf implementation
│   ├── prints_one.c      # Helper functions for printing (part 1)
│   └── prints_two.c      # Helper functions for printing (part 2)
└── README.md             # This file
```

## Technical Details

- **Language:** C
- **Compiler:** GCC
- **Compilation Flags:** `-Wall -Wextra -Werror`
- **Library Type:** Static library (`.a`)
- **Key Concepts:**
  - Variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)
  - Format string parsing
  - Type conversions
  - Hexadecimal representation
  - Return value management
- **Norm:** 42 School coding standard (Norminette)

## Implementation Details

### Variadic Functions
The project uses the `<stdarg.h>` library to handle variable argument lists:
- `va_list` - Type for argument list
- `va_start()` - Initialize argument list
- `va_arg()` - Retrieve next argument
- `va_end()` - Clean up argument list

### Return Value
Like the original printf, ft_printf returns the total number of characters printed to the standard output.

### Modular Design
The implementation is split across multiple files for better organization:
- Core printf logic in `ft_printf.c`
- Print helper functions in `prints_one.c` and `prints_two.c`
- Function prototypes in `ft_printf.h`

## About 42 School

This project is part of the 42 School curriculum, focusing on understanding variadic functions and reimplementing standard library functions.

## Author

**bmetehri** - 42 Student

Project completed: January 2023
