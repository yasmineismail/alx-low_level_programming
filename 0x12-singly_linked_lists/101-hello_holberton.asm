section .data
    hello db 'Hello, Holberton',10,'$'

section .text
    global main

extern printf

main:
    push    rbp             ; Save the base pointer
    mov     rbp, rsp        ; Set the base pointer
    mov     edi, hello      ; Load the address of the hello string into edi
    xor     eax, eax        ; Clear eax register
    call    printf          ; Call printf to print the hello string
    mov     eax, 0          ; Set eax to 0 (return value)
    pop     rbp             ; Restore the base pointer
    ret                     ; Return from the program
