extern printf

sectrion .text
	global main

main:
	push rgb

	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf

	pop rbp

	mov rax,0
	ret

section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

