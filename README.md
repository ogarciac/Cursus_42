*Este proyecto ha sido creado como parte del currículo de 42 por orlgarci.*

# Libft

## Descripción

Libft es una biblioteca en C con versiones propias de funciones habituales de
la biblioteca estándar. El objetivo es entender cómo funcionan las operaciones
de caracteres, cadenas y memoria, y reutilizarlas en otros proyectos.

Incluye las funciones obligatorias de libc, funciones adicionales de cadenas y
salida por descriptor, y operaciones con listas enlazadas mediante el tipo
`t_list`. Las declaraciones están en `Prueba/Libft/libft.h`; el Makefile de esa
carpeta crea `libft.a`.

## Instrucciones

Desde la raíz del repositorio, compila la biblioteca así:

```sh
cd Prueba/Libft
make
```

Para limpiar y recompilar, ejecuta `make re` desde `Prueba/Libft`. `make clean`
elimina los objetos y `make fclean` elimina también `libft.a`.

En otro programa, incluye `libft.h` y enlaza la biblioteca:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft
```

## Funciones de la biblioteca

La parte de libc incluye comprobación y conversión de caracteres (`ft_isalpha`,
`ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`,
`ft_tolower` y `ft_atoi`), operaciones con cadenas (`ft_strlen`, `ft_strlcpy`,
`ft_strlcat`, `ft_strncmp`, `ft_strchr`, `ft_strrchr`, `ft_strnstr` y
`ft_strdup`) y memoria (`ft_bzero`, `ft_memset`, `ft_memcpy`, `ft_memmove`,
`ft_memchr`, `ft_memcmp` y `ft_calloc`).

Las funciones adicionales son `ft_substr`, `ft_strjoin`, `ft_strtrim`,
`ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`,
`ft_putstr_fd`, `ft_putendl_fd` y `ft_putnbr_fd`.

Las listas enlazadas incluyen `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`,
`ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter` y
`ft_lstmap`. Las funciones de borrado y mapeo reciben una función `del` para
liberar el contenido de cada nodo.

## Recursos

- Enunciado oficial: [Guias/Libft.pdf](./Guias/Libft.pdf).
- Páginas de manual de C, por ejemplo `man 3 strlen`, `man 3 memcpy` y
  `man 3 atoi`.
- Referencia de la biblioteca estándar de C: <https://en.cppreference.com/w/c>.

### Uso de IA

Se utilizó un asistente de IA para ayudar a implementar y revisar funciones de
las tres partes, preparar comprobaciones de compilación y casos límite, y
redactar el README y el checklist. Las sugerencias se contrastaron compilando la
biblioteca y ejecutando pruebas locales; el código debe revisarse y entenderse
antes de presentarlo.
