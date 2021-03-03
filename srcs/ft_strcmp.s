section .text

	global _ft_strcmp				; ft_strcmp(rdi, rsi)
	mov rax, 0
	mov rbx, 0

_ft_strcmp:

	mov al, BYTE[rsi]
	mov bl, BYTE[rdi]
	cmp al, 0
	je _final
	cmp bl, 0
	je _final
	cmp al,bl
	jne _final
	inc rsi
	inc rdi
	jmp _ft_strcmp

_final:

	sub al, cl
	movzx rax,al
	ret