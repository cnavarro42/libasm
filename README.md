# libasm
A project where I create an assembly library
Proyecto donde creo una pequeña biblioteca en ensamblador.

The functions I will create in this project are:
Las funciones a realizar en este proyecto serán:

- ft_strlen
- ft_strcpy
- ft_strcmp
- ft_write
- ft_read
- ft_strdup 

Recursos:

- Doc de 42: https://harm-smits.github.io/42docs/projects/libasm

- PDF con mucha documentación: https://www.exabyteinformatica.com/uoc/Informatica/Estructura_de_computadores/Estructura_de_computadores_(Modulo_6).pdf

Ejecutamos el comando para descargar los paquetes y poder compilar en ensamblador:
brew install nasm

- Para conocer las llamadas al systema en macOS:

https://github.com/phracker/MacOSX-SDKs/blob/master/MacOSX10.9.sdk/usr/include/sys/syscall.h

ejemplo:
"#define	SYS_exit    1" (en doc)

mov rax, 0x02000001 (Escribimos 0x0200000 + el 1 que corresponde a SYS_exit).    