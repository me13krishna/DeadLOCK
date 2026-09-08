bits 64
section .text
global add_numbers

; function int add_numbers(int a, int b)
; On Windows x64 ABI: RCX = a, RDX = b
; Returns int in RAX
add_numbers:
    mov rax, rcx
    add rax, rdx
    ret
