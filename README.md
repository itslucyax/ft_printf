*Este proyecto ha sido creado como parte del currículo de 42 por luciamar.*


# ft_printf

## Descripción

ft_printf es una reimplementación de la función `printf()` de la librería
estándar de C, desarrollada como proyecto de la Escuela 42.

El objetivo principal es entender el funcionamiento interno de printf(),
aprendiendo a manejar funciones variádicas en C mediante `<stdarg.h>`.

La librería se compila como `libftprintf.a` e implementa las siguientes
conversiones: `%c %s %p %d %i %u %x %X %%`

## Instrucciones

**Compilar la librería:**
\```bash
make
\```

**Usar en tu proyecto:**
\```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o programa
\```

**Limpiar archivos objeto:**
\```bash
make clean
\```

**Limpiar todo:**
\```bash
make fclean
\```

**Recompilar desde cero:**
\```bash
make re
\```

## Uso

\```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hola %s, tienes %d años\n", "Laura", 22);
    ft_printf("Dirección: %p\n", &main);
    ft_printf("Hex: %x | %X\n", 255, 255);
    return (0);
}
\```

## Conversiones implementadas

| Especificador | Descripción                              |
|---------------|------------------------------------------|
| `%c`          | Imprime un carácter                      |
| `%s`          | Imprime un string                        |
| `%p`          | Imprime un puntero en hexadecimal        |
| `%d`          | Imprime un entero con signo (base 10)    |
| `%i`          | Imprime un entero con signo (base 10)    |
| `%u`          | Imprime un entero sin signo (base 10)    |
| `%x`          | Imprime un entero en hexadecimal (minus) |
| `%X`          | Imprime un entero en hexadecimal (mayus) |
| `%%`          | Imprime el carácter `%`                  |

## Algoritmo y estructura de datos

La función principal `ft_printf()` recorre el format string carácter a
carácter. Cuando encuentra el carácter `%`, delega en una función
dispatcher (`ft_dispatch()`) que identifica el especificador siguiente
y llama al conversor correspondiente.

Cada conversor devuelve el número de caracteres impresos, que se van
acumulando en un contador que es el valor de retorno final de `ft_printf()`.

Para los conversores numéricos (`%d`, `%u`, `%x`, `%X`, `%p`) se usa
recursión para descomponer el número dígito a dígito sin necesidad de
reservar memoria dinámica ni usar buffers auxiliares.

La librería se integra con `libft`, reutilizando `ft_strlen()` para
calcular la longitud de strings en `%s`, y `ft_print_char()` como base
de todos los conversores.

## Recursos

- `man 3 printf` — documentación oficial de printf
- `man 3 stdarg` — documentación de va_list, va_start, va_arg, va_end
- [cppreference — printf](https://en.cppreference.com/w/c/io/fprintf)
- [cppreference — va_arg](https://en.cppreference.com/w/c/variadic)

**Uso de IA:**
Claude (Anthropic) fue utilizado como herramienta de apoyo al aprendizaje
durante el desarrollo de este proyecto. Se usó para comprender el
funcionamiento de las funciones variadics, orientar la estructura del
código y resolver dudas conceptuales sobre gestión de memoria y tipos
en C. Todo el código ha sido escrito y comprendido por el estudiante.
