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

this_loop:
	cmp rax, rbx						; comparamos el resultado de strlen con el contador
	je final							; si son iguales, termina el programa
	mov BYTE [rdi + rbx], [rsi + rbx]	; copiamos el byte (puntero + contador) de rsi a rdi
										; esta mal, hay que hacerlo con auxiliar (dl)
	inc rbx								; aumentamos el contador
	jmp this_loop						; repetimos bucle

final:

	mov rax, rdi						; almacenams el resultado en rax
	ret									; lo devolvemos