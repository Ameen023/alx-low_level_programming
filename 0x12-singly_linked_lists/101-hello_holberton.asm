section .data
    hello db "Hello, Holberton", 0  ; Null-terminated string for printf

section .text
    global main

main:
    ; Call printf
    mov rdi, hello          ; Format string address
    mov rax, 0              ; RAX should contain 0 for printf
    call printf             ; Call printf

    ; Exit program
    mov rax, 60             ; syscall number for exit
    xor rdi, rdi            ; status = 0
    syscall

