section .text

	global _ft_strcpy
	extern _ft_strlen

_ft_strcpy:
										; queremos usar ft_strlen
	push rdi							; guardamos rdi en la pila
	mov rdi, rsi						; pasamos la cadena almacenada en rsi a rdi
	call _ft_strlen						; el resultado se almacena en rax
	pop rdi								; recuperamos el valor que teniamos en rdi
	mov rbx, 0							; contador

_this_loop:
	cmp rax, rbx						; comparamos el resultado de strlen con el contador
	je _final							; si son iguales, termina el programa
	mov dl, BYTE [rsi + rbx]			; copiamos el byte (puntero + contador) de rsi a rdi
	mov BYTE [rdi + rbx], dl			; usando dl como auxiliar
	inc rbx								; aumentamos el contador
	jmp _this_loop						; repetimos bucle

_final:

	mov rax, rdi						; almacenamos el resultado en rax
	ret									; devolvemos rax