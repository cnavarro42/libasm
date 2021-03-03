segment .text
    global _ft_read             ;ft_read(rdi, rsi, rdx)

_ft_read:
    mov rax, 0x2000003
    syscall
    jc _error
    ret

_error:
    mov rax, -1
    ret