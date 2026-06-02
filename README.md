*This project was created as part of the 42 curriculum by mtapiado.*

# ft_printf

`ft_printf` is a custom implementation of the standard C `printf` function. The goal of the project is to understand how formatted output works internally, with special focus on variadic functions, type dispatching, base conversion, pointer representation and clean library design.

The final result is a static library named `libftprintf.a`, exposing the function:

```c
int ft_printf(char const *format, ...);
```

---

## Description

This project reimplements a simplified version of `printf` from the C standard library. The function parses a format string, prints regular characters directly, detects conversion specifiers introduced by `%`, retrieves the corresponding variadic argument with `va_arg`, prints it in the expected representation, and returns the total number of characters written.

Unlike the original `printf`, this implementation does not reproduce the internal buffering system of libc. Instead, output is written directly to the standard output using `write`, through helper functions from `libft` and project-specific printing functions.

---

## Features

The mandatory implementation supports the following conversions:

| Conversion | Description |
|---|---|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a `void *` pointer in hexadecimal format |
| `%d` | Prints a signed decimal integer |
| `%i` | Prints a signed decimal integer |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints an unsigned integer in lowercase hexadecimal |
| `%X` | Prints an unsigned integer in uppercase hexadecimal |
| `%%` | Prints a percent sign |

---

## Project Structure

```text
.
├── Makefile
├── README.md
├── ft_printf.c
├── ft_printf.h
├── ft_functions.c
└── Libft/
    ├── Makefile
    ├── libft.h
    └── *.c
```

> Note: if your local `libft` directory is named `libft` instead of `Libft`, update both the include path in `ft_printf.h` and the `LIBFT_DIR` variable in the Makefile.

---

## Instructions

### Build the library

```bash
make
```

This command compiles `libft` first, then builds the final static library:

```text
libftprintf.a
```

### Remove object files

```bash
make clean
```

### Remove object files and the final library

```bash
make fclean
```

### Rebuild from scratch

```bash
make re
```

---

## Usage Example

Create a small test file:

```c
#include "ft_printf.h"

int main(void)
{
    int n;

    n = 42;
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "hello");
    ft_printf("Decimal: %d\n", -42);
    ft_printf("Unsigned: %u\n", 4294967295u);
    ft_printf("Hex lowercase: %x\n", 255);
    ft_printf("Hex uppercase: %X\n", 255);
    ft_printf("Pointer: %p\n", &n);
    ft_printf("Percent sign: %%\n");
    return (0);
}
```

Compile it with:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o test_printf
```

Run it:

```bash
./test_printf
```

---

## Algorithm and Design Choices

The implementation is intentionally simple and modular.

### 1. Format string traversal

`ft_printf` iterates through the `format` string one character at a time.

- If the current character is not `%`, it is printed directly.
- If the current character is `%`, the next character is interpreted as a conversion specifier.
- The conversion is delegated to a dispatcher function.

This keeps the main function focused on parsing and counting, instead of mixing all conversion logic in a single block.

### 2. Variadic argument handling

The function uses the standard variadic macros from `<stdarg.h>`:

- `va_start` initializes access to the unnamed arguments.
- `va_arg` retrieves the next argument using the expected type.
- `va_end` closes the variadic argument list.

The format string determines which type must be extracted. For example, `%s` retrieves a `char *`, `%d` retrieves an `int`, and `%p` retrieves a `void *`.

### 3. Conversion dispatching

A dedicated function, usually named `ft_format`, receives the conversion character and calls the appropriate helper:

- characters are printed with `ft_putchar_printf`
- strings are printed with `ft_putstring`
- signed integers use `ft_putnbr_base`
- unsigned integers and hexadecimal values use `ft_putnbr_base_un`
- pointers use `ft_putpointer`

This design makes the code easier to read, test and extend.

### 4. Base conversion

Numbers are printed using recursive base conversion.

For example, to print `255` in hexadecimal:

```text
255 / 16 = 15
255 % 16 = 15
```

The recursive call prints the higher digits first, and the current remainder selects the final digit from the base string:

```c
"0123456789abcdef"
```

This approach avoids dynamic memory allocation and works naturally for decimal, unsigned decimal and hexadecimal output.

### 5. Pointer representation

Pointers are converted to `unsigned long` before being printed in hexadecimal. The output is prefixed with `0x`, matching the conventional representation of memory addresses in C.

For a null pointer, the implementation may print either `0x0` or `(nil)` depending on the chosen behavior and the platform used as reference during testing.

---

## Limitations

This implementation covers the mandatory part of the project only.

It does not implement:

- field width
- precision
- flags such as `-`, `0`, `.`, `#`, space or `+`
- the original internal buffering system of libc `printf`

---

## Testing

Recommended tests include comparing the output and return value of `ft_printf` against the original `printf`:

```c
int a;
int b;

int n = 42;
a = ft_printf("c:%c s:%s d:%d u:%u x:%x X:%X p:%p %%\n",
        'A', "hello", -42, 4294967295u, 255, 255, &n);
b = printf("c:%c s:%s d:%d u:%u x:%x X:%X p:%p %%\n",
        'A', "hello", -42, 4294967295u, 255, 255, &n);
printf("ft_printf: %d\nprintf:    %d\n", a, b);
```

Important edge cases:

- `INT_MIN`
- `INT_MAX`
- `UINT_MAX`
- empty strings
- null strings
- null pointers
- `\0` as a character
- mixed conversions in a single format string

---

## Resources

- C standard library documentation for `printf`
- C variadic functions: `stdarg.h`, `va_list`, `va_start`, `va_arg`, `va_end`
- `man 3 printf`
- `man 3 stdarg`
- 42 intra subject for `ft_printf`
- Peer review and testing with other 42 students

---

## AI Usage

AI was used as a learning assistant during the development process, mainly for:

- clarifying the role of variadic functions
- understanding how `va_list`, `va_start`, `va_arg` and `va_end` work
- reviewing possible edge cases
- improving the structure of the README and Makefile
- discussing refactoring strategies for readability and maintainability

The project implementation was built progressively, tested manually, and adapted to the author's own coding style. The purpose of using AI was educational: to support reasoning, not to replace understanding.

---

## Author

**mtapiado**  
42 Madrid Fundación Telefónica
