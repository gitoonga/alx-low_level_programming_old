section .text

global main

main:
; Set the length of the message in EDX register
mov edx, len

; Set the address of the message in ECX register
mov ecx, msg

; Set the standard output file descriptor (1) in EBX register
mov ebx, 1

; Set the value 4 in EAX register to make a write system call
mov eax, 4

; Make the system call (INT 0x80)
int 0x80

; Set the value 1 in EAX register to make an exit system call
mov eax, 1

; Make the system call (INT 0x80)
int 0x80

section .data

; Message to be output, null-terminated and followed by a line feed
msg db "Hello, Holberton", 0xa

; Length of the message, calculated as the difference between the end of the message and the start of the message
len equ $ - msg
