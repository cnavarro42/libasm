segment text
    global _ft_write        ;ft_write(rdi, rsi, rdx)

_ft_write
    mov rbx, rdx
    mov rax, 0x2000004
    syscall
    jc _error
    jmp _final

_error:
    mov rax, -1
    ret

_final:
    mov rax, rbx
    ret