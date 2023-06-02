section .data
    message db "Hello, Holberton", 10, 0 ; string to be printed (with newline)
section .text
global main

main:
mov rdi, message ; load address of message into first argument register RDI
xor eax, eax     ; clear EAX register to prepare for printf call
call printf      ; call printf function with loaded arguments
ret              ; return from main function and exit program
