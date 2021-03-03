section .text

	global _ft_strlen			; ft_strlen(rdi)

_ft_strlen:

	mov rax, -1					; Inicializamos el contador en el registro que luego devolveremos

this_loop:

	inc rax
	cmp BYTE [rdi + rax], 0		; Comprobamos si el byte rdi(rax) es \0
	jne this_loop				; si no es \0 iteramos el loop

	ret							; devolvemos rax
