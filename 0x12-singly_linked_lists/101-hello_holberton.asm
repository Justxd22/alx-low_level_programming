section .text
	global main
	extern printf

section .data
	mistring db "Hello, Holberton", 0
	df       db "%s", 10, 0

main:
	mov esi, mistring
	mov edi, df
	mov eax, 0
	call printf

	mov eax, 0
	ret
