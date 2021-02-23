    global start

section .data
msg: db "Hola, Mundo!", 0x0a, 0x0d, '$'
    len equ $-msg

section .text

start:

    mov rax, 0x02000004
    mov rdi, 1
    mov rsi, msg
    mov rdx, len

    syscall

    mov rax, 0x02000001
    xor rdi, rdi

    syscall