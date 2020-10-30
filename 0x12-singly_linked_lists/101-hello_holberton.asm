section .data ; the declaration part

    msg db "Hello, Holberton", 10 ; the variable msg a string
                                  ; db series of bytes and 10 is ascii code for new line

section .text                     ; end of the data section and begining of the real code

global main                       ; entry point to the program
main:	                          ; this line will be executed first
    mov rax, 1                    ; moving data and values around the register rax whisch values can be written to and read from
    mov rdi, 1                    ; same as the above but this register will write to STDOUT (the 1)
    mov rsi, msg                  ; the data we need to be written (rax = 1 we want to write rdi = 1 where to write)
    mov rdx, 17                   ; how many bytes to print because it won't see all the string it will see just the first letter (pointer)
    syscall                       ; checks the values passed to rax rdi rsi and rdx