section .data
    mistring db "Hello, Holberton",10,0

section .text
    global main
    extern printf

main:
    mov rdi, mistring
    call printf

    mov rax, 60
    xor rdi, rdi
    syscall
