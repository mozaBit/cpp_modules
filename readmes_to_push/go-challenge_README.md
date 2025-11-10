# Go Challenge

A comprehensive collection of algorithmic exercises in Go - Piscine Programming Bootcamp

## Overview

Go-Challenge is a repository containing a collection of algorithmic exercises implemented in the Go programming language. These exercises were completed during the "piscine" - a bootcamp-style intensive training program designed to teach the fundamentals of programming in Go through hands-on practice.

## Description

This repository contains solutions to various programming challenges covering fundamental computer science concepts, algorithms, and data structures. The exercises progress from basic operations to more complex algorithmic problems, providing a comprehensive learning path for Go programming.

## Exercise Categories

### Basic Operations
**Character & String Manipulation:**
- `firstrune.go` - Get the first rune of a string
- `lastrune.go` - Get the last rune of a string
- `nrune.go` - Get the nth rune of a string
- `strlen.go` - Calculate string length
- `strrev.go` - Reverse a string
- `concat.go` - Concatenate two strings
- `printstr.go` - Print a string
- `index.go` - Find index of substring

**Character Classification:**
- `isalpha.go` - Check if character is alphabetic
- `isnumeric.go` - Check if character is numeric
- `islower.go` - Check if character is lowercase
- `isupper.go` - Check if character is uppercase
- `isprintable.go` - Check if character is printable
- `alphacount.go` - Count alphabetic characters

**Character Conversion:**
- `tolower.go` - Convert to lowercase
- `toupper.go` - Convert to uppercase

### Numeric Operations
**Type Conversion:**
- `atoi.go` - Advanced string to integer conversion
- `basicatoi.go` - Basic string to integer
- `basicatoi2.go` - Basic atoi variant
- `printnbr.go` - Print number

**Mathematical Functions:**
- `sqrt.go` - Square root calculation
- `isprime.go` - Check if number is prime
- `findnextprime.go` - Find next prime number
- `fibonacci.go` - Fibonacci sequence (recursive)
- `iterativefactorial.go` - Factorial (iterative)
- `recursivefactorial.go` - Factorial (recursive)
- `iterativepower.go` - Power function (iterative)
- `recursivepower.go` - Power function (recursive)

**Basic Operations:**
- `divmod.go` - Division and modulo
- `ultimatedivmod.go` - Advanced divmod
- `swap.go` - Swap two values
- `pointone.go` - Pointer to 1
- `ultimatepointone.go` - Advanced pointer usage

### Array Operations
- `appendrange.go` - Append range of integers to slice
- `makerange.go` - Create range of integers
- `foreach.go` - Apply function to each element
- `map.go` - Map function over array
- `any.go` - Check if any element satisfies condition
- `countif.go` - Count elements satisfying condition
- `issorted.go` - Check if array is sorted

### Linked List Operations
**Basic List Operations:**
- `listpushfront.go` - Add element to front
- `listpushback.go` - Add element to back
- `listsize.go` - Get list size
- `listlast.go` - Get last element
- `listat.go` - Get element at index
- `listclear.go` - Clear entire list
- `listreverse.go` - Reverse linked list

**Advanced List Operations:**
- `listforeach.go` - Apply function to each node
- `listforeachif.go` - Conditionally apply function
- `listfind.go` - Find element in list

### Binary Tree Operations
**Tree Traversal:**
- `btreeapplyinorder.go` - In-order traversal
- `btreeapplypreorder.go` - Pre-order traversal
- `btreeapplypostorder.go` - Post-order traversal

**Tree Operations:**
- `btreeinsertdata.go` - Insert data into tree
- `btreesearchitem.go` - Search for item in tree
- `btreelevelcount.go` - Count tree levels

### Output & Display Programs
**Programs with main():**
- `printalphabet/` - Print alphabet
- `printreversealphabet/` - Print alphabet in reverse
- `printdigits/` - Print digits 0-9
- `printparams/` - Print program parameters
- `printprogramname/` - Print program name
- `revparams/` - Print parameters in reverse
- `boolean/` - Boolean operations
- `displayfile/` - Display file contents
- `point/` - Point structure usage

### Pattern Generation
- `printcomb.go` - Print combinations of 3 digits
- `printcomb2.go` - Print combinations of 2 two-digit numbers
- `isnegative.go` - Print if number is negative

### String Comparison
- `compare.go` - Compare two strings

### Program Parameters
- `concatparams.go` - Concatenate program parameters

## Project Structure

```
go-challenge/
├── README.md                 # This file
├── go.mod                   # Go module definition
├── go.sum                   # Go module checksums
├── *.go                     # Individual exercise files (package piscine)
├── printalphabet/           # Print alphabet program
├── printreversealphabet/    # Print reverse alphabet program
├── printdigits/             # Print digits program
├── printparams/             # Print parameters program
├── printprogramname/        # Print program name
├── revparams/              # Reverse parameters program
├── boolean/                # Boolean operations program
├── displayfile/            # Display file program
├── point/                  # Point structure program
├── test/                   # Test programs
└── hello.sh                # Hello script
```

## Installation & Setup

### Requirements
- Go 1.13 or higher
- Git

### Clone Repository

```bash
git clone <repository-url>
cd go-challenge
```

### Module Setup

The repository uses Go modules with the package name `piscine`:

```bash
go mod download
```

## Usage

### Using Individual Functions

Most exercises are functions in the `piscine` package. To use them:

1. Import the package in your Go program:
```go
import "github.com/your-username/go-challenge"
```

2. Call the functions:
```go
package main

import (
    "fmt"
    piscine "github.com/your-username/go-challenge"
)

func main() {
    // String operations
    result := piscine.Atoi("42")
    fmt.Println(result) // 42

    // Fibonacci
    fib := piscine.Fibonacci(10)
    fmt.Println(fib) // 55

    // String reverse
    reversed := piscine.StrRev("Hello")
    fmt.Println(reversed) // "olleH"
}
```

### Running Standalone Programs

Programs with their own `main.go` files can be run directly:

```bash
# Print alphabet
cd printalphabet
go run main.go

# Print program parameters
cd printparams
go run main.go arg1 arg2 arg3

# Display file contents
cd displayfile
go run main.go filename.txt
```

## Example Solutions

### Atoi (String to Integer)
```go
package piscine

func Atoi(s string) int {
    // Handles positive/negative numbers
    // Returns 0 for invalid input
    // Supports '+' and '-' prefixes
}
```

### Fibonacci (Recursive)
```go
package piscine

func Fibonacci(index int) int {
    if index < 0 {
        return -1
    }
    if index == 0 {
        return 0
    }
    if index == 1 {
        return 1
    }
    return Fibonacci(index-1) + Fibonacci(index-2)
}
```

### List Reverse
```go
package piscine

func ListReverse(l *List) {
    // Reverses linked list in-place
    // Updates both head and tail pointers
}
```

## Technical Details

- **Language:** Go
- **Package:** piscine
- **Go Version:** 1.13+
- **Dependencies:** github.com/01-edu/z01 (for some printing exercises)

## Key Concepts Covered

### Programming Fundamentals
- Variables and data types
- Control structures (if, for, switch)
- Functions and recursion
- Pointers and memory management
- Slices and arrays

### Data Structures
- Arrays and Slices
- Linked Lists (singly-linked)
- Binary Trees
- Structures

### Algorithms
- Searching (linear, binary tree search)
- Sorting validation
- Recursion vs Iteration
- String manipulation
- Mathematical computations

### Go-Specific Features
- Runes and UTF-8 handling
- Slice operations
- Pointer manipulation
- Package organization
- Module management

## Exercise Difficulty Progression

**Beginner:**
- Basic I/O (printstr, printnbr)
- Simple operations (swap, strlen)
- Character checks (isalpha, isdigit)

**Intermediate:**
- String manipulation (strrev, concat)
- Numeric conversions (atoi, itoa)
- Array operations (foreach, map)
- Mathematical functions (factorial, power)

**Advanced:**
- Linked list operations (reverse, foreach)
- Binary tree operations (traversal, insert)
- Complex algorithms (combinations, sorting)
- Recursive solutions

## Testing

Create test files to verify implementations:

```go
package main

import (
    "fmt"
    piscine "path/to/go-challenge"
)

func main() {
    // Test Atoi
    fmt.Println(piscine.Atoi("123"))      // 123
    fmt.Println(piscine.Atoi("-456"))     // -456
    fmt.Println(piscine.Atoi("+789"))     // 789
    fmt.Println(piscine.Atoi("abc"))      // 0

    // Test Fibonacci
    for i := 0; i <= 10; i++ {
        fmt.Printf("F(%d) = %d\n", i, piscine.Fibonacci(i))
    }
}
```

## Learning Path

Recommended order for beginners:

1. **Week 1**: Basic operations and character functions
2. **Week 2**: String and numeric operations
3. **Week 3**: Array operations and higher-order functions
4. **Week 4**: Recursion and mathematical functions
5. **Week 5**: Linked list operations
6. **Week 6**: Binary tree operations

## About Piscine

The "piscine" (French for "swimming pool") is an intensive programming bootcamp format where students are "thrown into the deep end" and must learn through rapid, hands-on problem-solving. This particular collection focuses on Go programming fundamentals and algorithmic thinking.

## Notes

- All function implementations follow the `piscine` package convention
- Some exercises have multiple approaches (commented alternative solutions)
- Focus is on algorithmic thinking and Go language fundamentals
- Exercises range from basic to advanced difficulty

## Author

Solutions completed during Go programming piscine bootcamp.
