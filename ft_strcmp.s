global _ft_strcmp

section .text
_ft_strcmp:
.loop:
	mov bl, byte [rdi]
	cmp bl, byte [rsi]
	jne .return	
	cmp byte [rdi], 0
	je .return
	cmp byte [rsi], 0
	je .return
	inc rdi
	inc rsi
	jmp .loop
.return:
	sub bl, byte [rsi]
	movsx rax, bl
	ret

	; из rdi - rsi
