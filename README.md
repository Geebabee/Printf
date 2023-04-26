 0x11. C - printf task:

# Printf Function in C

This project implements a custom printf function in C. The printf function is used to print formatted output to the standard output stream (stdout).

## Function Prototype

The function prototype for our custom printf function is as follows:
```
int _printf(const char *format, ...);
```

## Format Specifiers

Our custom printf function supports the following format specifiers:

- `%c` - character
- `%s` - string
- `%d` or `%i` - signed decimal integer
- `%u` - unsigned decimal integer
- `%o` - octal integer
- `%x` or `%X` - hexadecimal integer
- `%p` - pointer address
- `%%` - percent character

## Usage
To use our custom printf function, simply include the `main.h` header file and call the `_printf` function with the desired format string and any additional arguments:

```
#include "main.h"

int main(void)
{
    char c = 'H';
    char *str = "Hello, world!";
    int num = 123;

    _printf("%c\n", c);     // Output: H
    _printf("%s\n", str);   // Output: Hello, world!
    _printf("%d\n", num);   // Output: 123

    return (0);
}
```

## Compilation

To compile the program, use the following command:

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

## Testing

To test the program, run the following command:

```
$ ./printf
``` 
