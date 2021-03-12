global _ft_strcmp

section .text
_ft_strcmp:
.loop:
	cmp byte [rdi], 0
	je .return
	cmp byte [rsi], 0
	je .return
	mov bl, byte [rdi]
	cmp bl, byte [rsi]
	jne .return	
	inc rdi
	inc rsi
	jmp .loop
.return:
	sub bl, byte [rsi]
	movsx rax, bl
	ret

	; из rdi - rsi
