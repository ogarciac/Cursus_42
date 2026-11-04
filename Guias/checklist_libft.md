# Libft - Checklist

## Estado general
- [x] Parte 1 - Funciones de libc
- [x] Parte 2 - Funciones adicionales
- [x] Parte 3 - Listas enlazadas
- [x] Makefile y librería base
- [x] Corrección de `ft_strlcpy`
- [x] Norminette en todos los `.c` y en `libft.h`

## Parte 1 - Funciones de libc

### Funciones de clasificación y conversión
- [x] `ft_isalpha`
- [x] `ft_isdigit`
- [x] `ft_isalnum`
- [x] `ft_isascii`
- [x] `ft_isprint`
- [x] `ft_toupper`
- [x] `ft_tolower`
- [x] `ft_atoi`

### Cadenas y longitud
- [x] `ft_strlen`
- [x] `ft_strlcpy`
- [x] `ft_strlcat`
- [x] `ft_strncmp`
- [x] `ft_strchr`
- [x] `ft_strrchr`
- [x] `ft_strnstr`
- [x] `ft_strdup`

### Memoria
- [x] `ft_bzero`
- [x] `ft_memset`
- [x] `ft_memcpy`
- [x] `ft_memmove`
- [x] `ft_memchr`
- [x] `ft_memcmp`
- [x] `ft_calloc`

## Parte 2 - Funciones adicionales

- [x] `ft_substr`
- [x] `ft_strjoin`
- [x] `ft_strtrim`
- [x] `ft_split`
- [x] `ft_itoa`
- [x] `ft_strmapi`
- [x] `ft_striteri`
- [x] `ft_putchar_fd`
- [x] `ft_putstr_fd`
- [x] `ft_putendl_fd`
- [x] `ft_putnbr_fd`

## Parte 3 - Listas enlazadas

- [x] `ft_lstnew`
- [x] `ft_lstadd_front`
- [x] `ft_lstsize`
- [x] `ft_lstlast`
- [x] `ft_lstadd_back`
- [x] `ft_lstdelone`
- [x] `ft_lstclear`
- [x] `ft_lstiter`
- [x] `ft_lstmap`

## Observaciones
- Las tres partes requeridas están implementadas y añadidas al `Makefile` y a `libft.h`.
- La compilación se realiza con `make` y crea `libft.a`.
- Se han revisado casos límite de `ft_calloc`, `ft_strlcat` y `ft_strnstr`, además de probar las funciones nuevas.
- Todos los archivos `.c` y `libft.h` pasan Norminette.
