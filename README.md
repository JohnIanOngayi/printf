# Custom Printf Function ⛓️

This repository contains all the files to implement a custom printf function that emulates the classic C printf function that we did as part of the SE curriculum at ALX School.

----

## Files

|**File**|**Description**|
|:-|:-|
|[_printf.c]()|implements printf|
|[_putchar.c]()|implements putchar|
|[_puts.c]()|implements puts|
|[print_HEX.c]()|converts to upper hexadecimal|
|[print_num.c]()|prints an integer |
|[printu_int.c]()|prints an unsigned int|
|[print_ROT13.c]()|encodes in ROT13|
|[print_rev.c]()|prints a string in reverse|

### Contributors

1.  [JohnIan Ong'ayi](github.com/JohnianOngayi)
2.  [Eunice Wahito](github.com/eunicekahinga)

----

**A brief description of what is contained in the files in this repository include:-**

### [_printf.c](https://github.com/JohnIanOngayi/printf/blob/main/_printf.c)

- A function that produces the output according to a format
- Prototype:

```c
int _printf(const char *format, ...);
```

----

### [_putchar.c](https://github.com/JohnIanOngayi/printf/blob/main/_putchar.c)

- A function that implements the standard putchar function
- Prototype:

```c
int _putchar(char c);
```

----

### [print_num.c](https://github.com/JohnIanOngayi/printf/blob/main/print_num.c)

- A function that prints a number in its octal equivalent
- Prototype:

```c
int print_num(int num, int base);
```

----

### [print_uns.c](https://github.com/JohnIanOngayi/printf/blob/main/print_uns.c)

- A function that prints an unsigned integer
- Prototype:

```c
int print_Unsigned(unsigned int num);
```

----

### [print_ROT13.c](https://github.com/JohnIanOngayi/printf/blob/main/print_ROT13.c)

- A function that prints a string in 1337 encoding
- Prototype:

```c
int print_rot13(char *a);
```

----

### [print_rev.c](https://github.com/JohnIanOngayi/printf/blob/main/print_rev.c)

- A function that prints a string in reverse
- Prototype:

```c
int print_rev(char *str);
```

----

### [print_S.c](https://github.com/JohnIanOngayi/printf/blob/main/print_S.c)

- Implements C standard snprintf
- Prototype:

```c
int print_custom(char *str);
```

----

### [print_HEX.c](https://github.com/JohnIanOngayi/printf/blob/main/print_HEX.c)

- Prints uppercase hexadecimal digits
- Prototype:

```c
int print_HEX(long int num, int base);
```

----

### [specifier.c](https://github.com/JohnIanOngayi/printf/blob/main/specifier.c)

- Relates specifier to function
- Prototype:

```c
int spec(char specifier, va_list args)
```

----