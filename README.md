# libasm
A project where I create an assembly library.

The functions I will create in this project are:

- ft_strlen
- ft_strcpy
- ft_strcmp
- ft_write
- ft_read
- ft_strdup 

Resouces:

- 42 doc: https://harm-smits.github.io/42docs/projects/libasm

- PDF more doc: https://www.exabyteinformatica.com/uoc/Informatica/Estructura_de_computadores/Estructura_de_computadores_(Modulo_6).pdf

Package with assambly compiler:
brew install nasm

- Syscalls in macOS:

https://github.com/phracker/MacOSX-SDKs/blob/master/MacOSX10.9.sdk/usr/include/sys/syscall.h

example:
"#define	SYS_exit    1" (en doc)

mov rax, 0x02000001 (Escribimos 0x0200000 + 1 for SYS_exit)
