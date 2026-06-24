*This project has been created as part of the 42 curriculum by csilva-v.*

# FT_Printf

## Description

The purpose of this project is to recreate the behavior of the standard C library function `printf()`.

The project introduces variadic functions through the `<stdarg.h>` library and focuses on parsing format strings, handling multiple data types, and reproducing the output behavior of the original `printf()` function.

The implemented function returns the total number of printed characters, just like the original implementation.

### Supported Conversions

| Conversion | Description |
|------------|------------|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal |
| `%d` | Prints a decimal number |
| `%i` | Prints an integer |
| `%u` | Prints an unsigned integer |
| `%x` | Prints a hexadecimal number in lowercase |
| `%X` | Prints a hexadecimal number in uppercase |
| `%%` | Prints a percent sign |

---

## Instructions

### Requirements

- C compiler (cc)
- Make
- Unix/Linux environment

### Build

Compile the library:

```bash
make
```

This command generates:

```text
libftprintf.a
```

### Clean Object Files

```bash
make clean
```

### Remove Object Files and Library

```bash
make fclean
```

### Rebuild Everything

```bash
make re
```

### Using the Library

Include the header file:

```c
#include "ft_printf.h"
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "World");
    return (0);
}
```

Compile your program with:

```bash
cc main.c libftprintf.a
```

---

## Algorithm & Data Structures

### General Algorithm

The function processes the format string one character at a time.

When a regular character is found, it is printed immediately.

When a `%` character is encountered, the following character is interpreted as a conversion specifier and dispatched to the corresponding printing function.

The number of printed characters is tracked throughout the execution and returned at the end.

Pseudo-code:

```c
initialize va_list

while format string is not finished
{
    if current character is '%'
        process conversion
    else
        print character
}

return total printed characters
```

### Variadic Arguments

The implementation relies on the `va_list` type and related macros provided by `<stdarg.h>`:

- `va_start`
- `va_arg`
- `va_end`

These tools allow the function to access a variable number of arguments passed by the caller.

### Project Organization

Each conversion type is handled by its own dedicated function.

This modular approach improves readability, maintainability, and scalability while keeping the main `ft_printf()` function simple.

---

## Project Structure

```text
ft_printf/
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── print_char.c
├── print_string.c
├── print_number.c
├── print_hex.c
├── print_pointer.c
└── libft/
```

### Main Components

- `ft_printf.c` → main project entry point.
- Conversion files → responsible for each format specifier.
- `libft/` → utility functions reused from Libft.

---

## Usage Examples

```c
ft_printf("Character: %c\n", 'A');
ft_printf("String: %s\n", "Hello");
ft_printf("Integer: %d\n", 42);
ft_printf("Unsigned: %u\n", 42);
ft_printf("Hex: %x\n", 255);
ft_printf("Pointer: %p\n", ptr);
```

Output:

```text
Character: A
String: Hello
Integer: 42
Unsigned: 42
Hex: ff
Pointer: 0x7ffd12345678
```

---

## Resources

### Documentation

- C Standard Library Documentation
- printf() Manual Page
- stdarg.h Manual Page
- 42 Subject Documentation

### AI Usage

AI was used exclusively as a learning and debugging assistant to:

- Clarify concepts related to variadic functions.
- Understand specific behaviors of the original `printf()`.
- Review implementation ideas.
- Assist during testing and debugging.

All code was written, tested, and understood by the author.

---

## What I Learned

Through this project I learned:

- Variadic functions in C.
- Argument handling with `<stdarg.h>`.
- Format string parsing.
- Number conversion algorithms.
- Hexadecimal representation.
- Modular software design.
- Reproducing behaviors from the standard C library.
- Building reusable libraries for future projects.