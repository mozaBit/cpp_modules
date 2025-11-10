# Minitalk

A client-server communication program using UNIX signals - 42 School Project

## Overview

Minitalk is a 42 School project that implements a simple data exchange program between a client and a server using UNIX signals. The challenge is to transmit text messages character by character, bit by bit, using only two signals: `SIGUSR1` and `SIGUSR2`.

## Description

This project creates two programs:
- **Server**: Displays its PID and waits to receive messages from clients
- **Client**: Sends a string message to the server using only UNIX signals

The communication happens at the bit level - each character is encoded into 8 bits and transmitted one bit at a time using signals.

## How It Works

### Signal-Based Communication

The project uses a binary encoding system:
- **SIGUSR1**: Represents a binary '1'
- **SIGUSR2**: Represents a binary '0'

### Process Flow

1. Server starts and prints its Process ID (PID)
2. Client receives server PID and message as arguments
3. Client converts each character into 8 bits
4. For each bit:
   - Send SIGUSR1 if bit is '1'
   - Send SIGUSR2 if bit is '0'
5. Server receives signals and reconstructs characters bit by bit
6. Server displays the complete message

### Example Transmission

For the character 'A' (ASCII 65 = 0b01000001):
```
Bit:    0    1    0    0    0    0    0    1
Signal: USR2 USR1 USR2 USR2 USR2 USR2 USR2 USR1
```

## Features

### Mandatory Part
- Server displays its PID on launch
- Client sends a string to server using server's PID
- Server receives and displays the message
- Fast message transmission
- Server can handle multiple consecutive clients without restarting

### Bonus Part
- Server acknowledges each received message
- Support for Unicode characters (extended ASCII)

## Installation & Compilation

### Requirements
- GCC compiler
- Make
- Linux/Unix system (uses POSIX signals)

### Compilation

Compile the mandatory part:
```bash
make
```

Compile with bonus features:
```bash
make bonus
```

This creates two executables:
- `server` (or `server_bonus`)
- `client` (or `client_bonus`)

### Cleaning

Remove object files:
```bash
make clean
```

Remove object files and executables:
```bash
make fclean
```

Recompile everything:
```bash
make re
```

## Usage

### Basic Usage

1. Start the server in one terminal:
```bash
./server
```

The server will display its PID:
```
Server PID: 12345
```

2. Send a message from the client in another terminal:
```bash
./client [SERVER_PID] "Your message here"
```

### Example Session

**Terminal 1 (Server):**
```bash
$ ./server
Server PID: 12345
Hello, 42!
This is minitalk!
```

**Terminal 2 (Client):**
```bash
$ ./client 12345 "Hello, 42!"
$ ./client 12345 "This is minitalk!"
```

### Bonus Usage

With the bonus version, the client receives acknowledgment:

```bash
$ ./client_bonus 12345 "Test message"
Received Signal!
```

## Project Structure

```
minitalk/
├── Makefile              # Build configuration
├── inc/
│   └── server.h          # Header file with prototypes
├── src/
│   ├── server/
│   │   ├── server.c      # Server main program
│   │   ├── handlers.c    # Signal handling for server
│   │   ├── ft_printf.c   # Custom printf implementation
│   │   ├── prints_one.c  # Print helper functions
│   │   ├── prints_two.c  # Additional print helpers
│   │   └── utiles.c      # Utility functions
│   └── client/
│       ├── client.c      # Client main program
│       ├── send.c        # Message transmission logic
│       ├── utils.c       # Utility functions
│       └── utils_bis.c   # Additional utilities
├── bonus/
│   ├── server/           # Bonus server implementation
│   └── client/           # Bonus client implementation
└── README.md             # This file
```

## Technical Details

### Language & Compilation
- **Language:** C
- **Compiler:** GCC
- **Compilation Flags:** `-Wall -Wextra -Werror -g3`
- **Norm:** 42 School coding standard (Norminette)

### Key Concepts

**UNIX Signals:**
- `SIGUSR1` and `SIGUSR2` - User-defined signals
- `sigaction()` - Signal handler setup
- `kill()` - Send signal to process
- `getpid()` - Get process ID

**Signal Handling:**
- Uses `sigaction` structure with `SA_SIGINFO` flag
- `siginfo_t` structure provides sender's PID for acknowledgment
- Static variables maintain state between signal receptions

**Bit Manipulation:**
- Left shift (`<<`) to extract bits from characters
- Bitwise OR (`|`) to reconstruct characters from bits
- Binary masking to check bit values

**Timing:**
- `usleep()` for small delays between signal transmissions
- Ensures signals are not sent faster than they can be processed

### Algorithm

**Client Side:**
```
For each character in message:
    For each bit in character (8 bits):
        If bit is 1: send SIGUSR1
        If bit is 0: send SIGUSR2
        Wait briefly (usleep)
```

**Server Side:**
```
On receiving signal:
    Add bit to current character (0 or 1)
    Increment bit counter
    If 8 bits received:
        Print character
        Reset counter and character buffer
```

## Error Handling

The program handles various error cases:
- Invalid server PID
- Invalid arguments
- Signal transmission failures
- Non-numeric PID input

## Limitations

- Communication is one-way (client to server)
- Uses only two signals for binary encoding
- Requires small delays between transmissions
- PID must be provided manually

## About 42 School

This project is part of the 42 School curriculum, focusing on:
- UNIX signals and inter-process communication
- Bit manipulation and binary encoding
- Client-server architecture
- System programming

## Author

**bmetehri** - 42 Student

Project completed: October 2023
