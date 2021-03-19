global _ft_strcpy

section .text
_ft_strcpy:
	mov rax, rdi
;специальная команда для работы со строками в ассемблере movsb
.loop:
	cmp byte [rsi], 0
	je .return
	mov bl, byte [rsi]
	mov byte [rdi], bl
	inc rsi
	inc rdi
	jmp .loop

.return:
	mov bl, byte [rsi]
	mov byte [rdi], bl
	ret

