
*This project was created as part of the 42 curriculum by mtapiado.*

# Libft

> A custom C library, built from scratch to understand, master, and reuse fundamental functions throughout the 42 cursus.

---

## Table of Contents

- [Description](#description)
- [Project Goals](#project-goals)
- [Repository Structure](#repository-structure)
- [Instructions](#instructions)
  - [Compilation](#compilation)
  - [Makefile Rules](#makefile-rules)
  - [Usage](#usage)
- [Implemented Functions](#implemented-functions)
  - [Part 1: libc Functions](#part-1--libc-functions)
  - [Part 2: Additional Functions](#part-2--additional-functions)
  - [Part 3: Linked Lists](#part-3--linked-lists)
- [Technical Decisions](#technical-decisions)
- [Testing](#testing)
- [Resources](#resources)
- [Use of AI](#use-of-ai)
- [Author](#author)

---

## Description

**Libft** is the first project of the 42 Common Core. The goal is to create a custom static C library, named `libft.a`, by implementing a set of essential functions from scratch.

The project recreates part of the behavior of the C standard library, commonly known as `libc`, and also includes additional utility functions that will be useful in future projects.

Through this project, several core programming concepts are reinforced:

- Character manipulation.
- String manipulation.
- Memory management.
- Type conversion.
- File descriptor usage.
- Code modularity.
- Static library creation.
- Introduction to linked lists.

Libft is not just a collection of functions. It is a reusable foundation that will support many future projects throughout the cursus.

---

## Project Goals

The main objective of this project is to understand how some of the most commonly used C functions work internally.

Instead of relying directly on the standard library, this project requires rebuilding those tools from the ground up. This helps develop a deeper understanding of:

- How strings are traversed character by character.
- How memory is copied, moved, and compared.
- How dynamic memory is allocated and released.
- How allocation errors should be handled.
- How to structure a reusable C library.
- How to write code while following a strict style standard.

The final result should be a solid, clear, maintainable library ready to be used in future projects.

---

## Repository Structure

```txt
.
├── Makefile
├── libft.h
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_strlen.c
├── ft_memset.c
├── ft_strdup.c
├── ft_split.c
├── ft_itoa.c
├── ft_lstnew.c
├── ft_lstmap.c
├── ...
└── README.md
```

All project files are located at the root of the repository.

Main files:

| File | Description |
|---|---|
| `libft.h` | Main header file of the library |
| `Makefile` | Compilation file |
| `ft_*.c` | Function implementations |
| `ft_lst*.c` | Linked list function implementations |
| `README.md` | Project documentation |

---

## Instructions

This section explains how to compile the library, which rules are available in the `Makefile`, and how to use `libft.a` in other programs.

---

### Compilation

To compile the library:

```bash
make
```

This command generates the following file:

```bash
libft.a
```

The project is compiled using the required flags:

```bash
-Wall -Wextra -Werror
```

These flags help keep the code safer and cleaner:

| Flag | Purpose |
|---|---|
| `-Wall` | Enables most compiler warnings |
| `-Wextra` | Enables additional compiler warnings |
| `-Werror` | Treats warnings as errors |

---

### Makefile Rules

| Rule | Description |
|---|---|
| `make` | Compiles the library |
| `make all` | Compiles the library |
| `make clean` | Removes object files `.o` |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Cleans and rebuilds the project from scratch |

Example:

```bash
make re
```

This command removes previously generated files and recompiles the entire project.

---

### Usage

To use `libft.a` in another program, first include the header:

```c
#include "libft.h"
```

Then compile your program by linking the library:

```bash
cc -Wall -Wextra -Werror main.c libft.a
```

Basic example:

```c
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;

	str = ft_strdup("Hello, Libft!");
	if (!str)
		return (1);
	printf("%s\n", str);
	free(str);
	return (0);
}
```

Expected output:

```txt
Hello, Libft!
```

---

# Implemented Functions

The library is organized into three main sections:

1. Functions inspired by the standard C library.
2. Additional utility functions.
3. Linked list functions.

---

## Part 1 — libc Functions

These functions reproduce the behavior of standard C functions while using the `ft_` prefix.

### Character Checks

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic |
| `ft_isdigit` | Checks whether a character is a digit |
| `ft_isalnum` | Checks whether a character is alphanumeric |
| `ft_isascii` | Checks whether a character belongs to the ASCII table |
| `ft_isprint` | Checks whether a character is printable |

These functions return `1` if the condition is true and `0` otherwise.

---

### Memory Manipulation

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory area with a specific value |
| `ft_bzero` | Fills a memory area with zeroes |
| `ft_memcpy` | Copies memory between non-overlapping areas |
| `ft_memmove` | Copies memory even when areas overlap |
| `ft_memchr` | Searches for a byte inside a memory area |
| `ft_memcmp` | Compares two memory blocks |
| `ft_calloc` | Allocates memory and initializes all bytes to zero |

These functions are essential to understanding how C works directly with memory.

---

### String Manipulation

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string |
| `ft_strlcpy` | Copies a string while respecting the buffer size |
| `ft_strlcat` | Concatenates strings while respecting the buffer size |
| `ft_strchr` | Finds the first occurrence of a character |
| `ft_strrchr` | Finds the last occurrence of a character |
| `ft_strncmp` | Compares two strings up to `n` characters |
| `ft_strnstr` | Searches for a substring inside another string |
| `ft_strdup` | Duplicates a string using dynamic memory |

These functions allow strings to be handled in a controlled and safer way.

---

### Character and Number Conversion

| Function | Description |
|---|---|
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_atoi` | Converts a string to an integer |

---

## Part 2 — Additional Functions

These functions are either not part of the standard libc or provide behavior adapted to future project needs.

| Function | Description |
|---|---|
| `ft_substr` | Creates a substring from an existing string |
| `ft_strjoin` | Joins two strings into a new string |
| `ft_strtrim` | Removes specific characters from the beginning and end of a string |
| `ft_split` | Splits a string using a delimiter |
| `ft_itoa` | Converts an integer into a string |
| `ft_strmapi` | Applies a function to each character and creates a new string |
| `ft_striteri` | Applies a function to each character, modifying the original string |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

These functions introduce important C programming patterns, especially dynamic memory allocation, function pointers, and writing to different file descriptors.

---

## Part 3 — Linked Lists

The third part introduces singly linked lists through the `t_list` structure.

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Each node contains:

| Field | Description |
|---|---|
| `content` | Pointer to the stored content |
| `next` | Pointer to the next node in the list |

Using `void *` allows the list to store different types of data.

---

### Linked List Functions

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node |
| `ft_lstadd_front` | Adds a node to the beginning of the list |
| `ft_lstsize` | Counts the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node to the end of the list |
| `ft_lstdelone` | Frees a single node |
| `ft_lstclear` | Frees an entire list |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Creates a new list by applying a function to each node |

These functions provide a first introduction to dynamic data structures, which are essential for more advanced projects.

---

# Technical Decisions

## Static Library

The project generates a static library named:

```txt
libft.a
```

This library groups the object files `.o` and makes the functions reusable in other programs.

---

## Use of `ar`

The library is created using:

```bash
ar
```

This command archives object files into `libft.a`.

---

## Use of `static` Helper Functions

When a helper function is only used inside a specific `.c` file, it is declared as `static`.

This provides two main advantages:

- It prevents internal helper functions from being exposed outside the file.
- It improves code organization and encapsulation.

---

## Memory Management

Functions that allocate memory with `malloc` or `calloc` return `NULL` if the allocation fails.

In functions with multiple allocations, such as `ft_split` or `ft_lstmap`, previously allocated memory must be released correctly if an intermediate allocation fails.

This is essential to prevent memory leaks.

---

## No Global Variables

The project does not use global variables.

Each function works only with its arguments, local variables, and return values, resulting in cleaner and more predictable code.

---

## Norminette

The code follows the 42 Norm.

This means respecting style constraints such as:

- Maximum function length.
- Separate variable declarations.
- Clear and consistent naming.
- Strict formatting.
- Clean code organization.

---

# Testing

Test files are not part of the final submission, but they are very useful during development.

A simple way to test the library is to create a `main.c` file and compile it together with `libft.a`.

Example:

```bash
cc -Wall -Wextra -Werror main.c libft.a
```

Some functions can also be compared with their original libc equivalents.

Example:

```c
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("ft_strlen: %zu\n", ft_strlen("42 Madrid"));
	printf("strlen:    %zu\n", strlen("42 Madrid"));
	return (0);
}
```

Expected output:

```txt
ft_strlen: 9
strlen:    9
```

---

## Recommended Test Cases

| Function Type | Cases Worth Testing |
|---|---|
| Characters | Letters, digits, symbols, and out-of-range values |
| Strings | Empty strings, long strings, and null characters |
| Memory | Overlapping buffers, zero sizes, and binary data |
| Dynamic allocation | Allocation failures, proper freeing, and leaks |
| Lists | Empty list, single node, and multiple nodes |

To check for memory leaks, you can use:

```bash
valgrind ./a.out
```

---

# Resources

## Official Documentation and References

- System manual using `man`.
- `man strlen`
- `man memset`
- `man memcpy`
- `man memmove`
- `man atoi`
- `man calloc`
- `man malloc`
- `man free`
- `man write`
- Documentation on dynamic memory in C.
- Documentation on linked lists.
- *The C Programming Language*, Brian W. Kernighan and Dennis M. Ritchie.

---

## Reinforced Concepts

During the development of Libft, the following concepts are especially reinforced:

| Concept | Application in the Project |
|---|---|
| Pointers | Memory access, strings, and structures |
| Dynamic memory | Use of `malloc`, `calloc`, and `free` |
| Strings | Traversal, copy, search, and comparison |
| Buffers | Safe manipulation of memory blocks |
| Modularity | Separation of functions into different files |
| Makefile | Automation of the compilation process |
| Static libraries | Creation and reuse of `libft.a` |
| Linked lists | Introduction to dynamic data structures |

---

# Use of AI

AI was used only as a support tool for the project documentation.

Specifically, it was used to:

- Improve the structure of this README.
- Make the explanation of the project clearer.
- Organize the sections in a more professional way.
- Write descriptions that are easier to understand for readers unfamiliar with Libft.
- Review the readability and overall presentation of the document.

AI was not used to replace the learning process or to avoid understanding the code.

The implementation, debugging, and defense of the project remain part of the student’s own work.

---

# Author

Project developed by:

```txt
mtapiado
```

As part of the 42 curriculum.

---

## Final Note

Libft is the first step toward building a strong foundation in C.

Each implemented function helps deepen the understanding of how the language works at a low level: memory, pointers, strings, compilation, and data structures.

This library is not only an academic requirement; it is also a personal tool for future projects throughout the cursus.