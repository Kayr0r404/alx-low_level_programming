#include "shell.h"

/* Custom function to print a character using low-level I/O */
void _putchar(char c)
{
    write(STDOUT_FILENO, &c, 1);
}

/* Custom function to print a string using low-level I/O */
void _putstr(const char *str)
{
    size_t len = 0;
    while (str[len] != '\0')
        len++;
    write(STDOUT_FILENO, str, len);
}

/* Custom version of printf for strings */
void _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++; /* Move past '%'*/
            if (*format == 's')
            {
                char *str_arg = va_arg(args, char *);
                _putstr(str_arg);
            }
        }
        else
        {
            _putchar(*format);
        }

        format++; /* Move to the next character*/
    }

    va_end(args);
}
