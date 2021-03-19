global _ft_strcmp

section .text
_ft_strcmp:
.loop:
	cmp byte [rdi], 0
	jne .return
	mov bl, byte [rdi]
	cmp bl, byte [rsi]
	je .return
	inc rdi
	inc rsi
	jmp .loop
.return:
	sub bl, byte [rsi]
	movsx rax, bl
	ret
	; из rdi - rsi
