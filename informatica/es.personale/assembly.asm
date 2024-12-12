;se ax e piu grande di bx sostiture ax con bx
.model small
.stack 200h
.data
.code
MAIN:
    .startup
    mov ax, @data
    mov ds, ax
    cmp ax, bx
    jg scambio
    jmp fine
        scambio:
            mov cx, ax
            mov ax, bx
            mov bx, cx
        fine:

    
    mov ah, 4ch
    int 21h
    .exit
END