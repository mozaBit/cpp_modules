# Get Next Line

A function that reads a line from a file descriptor - 42 School Project

## Overview

Get Next Line (GNL) is a 42 School project that implements a function to read content from a file descriptor, one line at a time. This project teaches fundamental programming concepts including static variables, memory management, file I/O, and linked lists.

## Description

The goal is to create a function `get_next_line()` that returns a single line read from a file descriptor. Each successive call to the function returns the next line until the end of the file is reached.

The challenge lies in:
- Managing a variable buffer size
- Handling multiple file descriptors
- Preserving data between function calls using static variables
- Proper memory management to avoid leaks

## Function Prototype

```c
char *get_next_line(int fd);
```

### Parameters
- `fd`: The file descriptor to read from

### Return Value
- Returns the line that was read (including the terminating `\n` character if present)
- Returns `NULL` if there is nothing more to read or if an error occurred

## Features

### Core Functionality
- Reads from any valid file descriptor (files, stdin, network connections, etc.)
- Returns one line per call, including the newline character
- Handles files with or without newline at the end
- Works with any buffer size (configurable via compilation flag)
- Efficient memory usage with linked list structure

### Key Characteristics
- **Static Variable**: Maintains state between function calls
- **Configurable Buffer**: BUFFER_SIZE can be set at compilation
- **Dynamic Memory**: Allocates exact memory needed for each line
- **Linked List**: Buffers are stored in a linked list until a complete line is formed

## Installation & Compilation

### Requirements
- GCC compiler
- Make (optional, for easier compilation)

### Compilation

The function can be compiled with any BUFFER_SIZE value:

```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c
```

Common BUFFER_SIZE values:
- Small (1-10): Good for testing edge cases
- Medium (32-128): Balanced performance
- Large (1024+): Faster for large files

### Example Compilation with Main

```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c your_main.c -o gnl_test
```

## Usage

### Basic Example

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd;
    char *line;

    // Open a file
    fd = open("test.txt", O_RDONLY);
    if (fd == -1)
        return (1);

    // Read line by line
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);  // Always free the returned line!
    }

    close(fd);
    return (0);
}
```

### Reading from Standard Input

```c
#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
    char *line;

    printf("Enter text (Ctrl+D to end):\n");
    while ((line = get_next_line(0)) != NULL)  // 0 = stdin
    {
        printf("You entered: %s", line);
        free(line);
    }

    return (0);
}
```

### Reading Multiple Files

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd1, fd2;
    char *line1, *line2;

    fd1 = open("file1.txt", O_RDONLY);
    fd2 = open("file2.txt", O_RDONLY);

    // Alternate reading from two files
    line1 = get_next_line(fd1);
    line2 = get_next_line(fd2);

    printf("File1: %s", line1);
    printf("File2: %s", line2);

    free(line1);
    free(line2);
    close(fd1);
    close(fd2);

    return (0);
}
```

## How It Works

### Algorithm Overview

1. **Read from File**: Read BUFFER_SIZE bytes from the file descriptor
2. **Store in List**: Add the buffer to a linked list structure
3. **Check for Newline**: Search for `\n` in the collected data
4. **Extract Line**: When `\n` is found, extract the complete line
5. **Clean Up**: Keep remaining data for the next call
6. **Return**: Return the extracted line

### Data Structure

The function uses a linked list to store partial reads:

```c
typedef struct s_list
{
    char            *content;  // Buffer content
    struct s_list   *next;     // Next node
}                   t_list;
```

### Static Variable

A static linked list maintains data between function calls:
```c
static t_list *mylist;
```

This allows the function to:
- Remember leftover data from previous reads
- Handle cases where a line spans multiple reads
- Support multiple file descriptors (bonus)

## Project Structure

```
get_next_line/
├── get_next_line.h           # Header file with prototypes and definitions
├── get_next_line.c           # Main function implementation
├── get_next_line_utils.c     # Helper functions
└── README.md                 # This file
```

## Function Breakdown

### Main Functions

**get_next_line.c:**
- `get_next_line()` - Main function that coordinates the reading process
- `read_and_stack()` - Reads from fd and adds to linked list
- `add_to_mylist()` - Adds a new buffer node to the list
- `get_line()` - Extracts a complete line from the list
- `clean_list()` - Removes processed data, keeps leftovers

**get_next_line_utils.c:**
- `new_line_founded()` - Checks if a newline exists in the list
- `ft_lst_get_last()` - Gets the last node of the list
- `allocate_memory_to_line()` - Allocates memory for the line
- `ft_strlen()` - Calculates string length
- `free_list()` - Frees all nodes in the list

## Technical Details

- **Language:** C
- **Compilation Flags:** `-Wall -Wextra -Werror`
- **Buffer Size:** Configurable via `-D BUFFER_SIZE=n`
- **Norm:** 42 School coding standard (Norminette)
- **Allowed Functions:**
  - `read()`
  - `malloc()`
  - `free()`

### Key Concepts

**Static Variables:**
- Retain their value between function calls
- Used to maintain the linked list across calls
- Essential for reading files line by line

**File Descriptors:**
- Integer handles for open files
- 0 = stdin, 1 = stdout, 2 = stderr
- Other values for opened files

**Buffer Management:**
- Fixed-size buffer for reading chunks
- Dynamic allocation for lines of any length
- Linked list to handle multi-buffer lines

**Memory Management:**
- All allocated memory must be freed
- Caller is responsible for freeing returned lines
- Internal list is cleaned up automatically

## Edge Cases Handled

- Empty files
- Files without newline at the end
- Very long lines (longer than BUFFER_SIZE)
- Multiple consecutive newlines
- BUFFER_SIZE of 1 (reading byte by byte)
- Invalid file descriptors
- Read errors

## Common Pitfalls

1. **Memory Leaks**: Always free the returned line
2. **Buffer Size**: Test with various BUFFER_SIZE values
3. **EOF Handling**: Last line might not have `\n`
4. **Error Checking**: Validate file descriptor and read return values
5. **Static Variables**: Remember they persist between calls

## Testing

### Test Files

Create test files with various scenarios:
```bash
echo "Line 1\nLine 2\nLine 3" > test.txt
echo -n "No newline at end" > test2.txt
```

### Buffer Size Testing

Test with different buffer sizes:
```bash
gcc -D BUFFER_SIZE=1 ...    # Minimum (slowest)
gcc -D BUFFER_SIZE=42 ...   # Standard
gcc -D BUFFER_SIZE=10000 ... # Large
```

## About 42 School

This project is part of the 42 School curriculum, focusing on:
- File I/O operations
- Static variables and their behavior
- Dynamic memory allocation
- Linked list data structures
- Buffer management

## Author

**bmetehri** - 42 Student

Project completed: April 2023
