section .text

	global _ft_strcmp				; ft_strcmp(rdi, rsi)

_ft_strcmp:

	mov rcx, 0

_loop:
	mov al, BYTE[rdi + rcx]
	mov dl, BYTE[rsi + rcx]
	cmp al, 0
	je _final
	cmp dl, 0
	je _final
	cmp al,dl
	jne _final
	inc rcx
	jmp _loop

_final:

	movzx rax, al
	movzx rdx, dl
	sub rax, rdx
	ret