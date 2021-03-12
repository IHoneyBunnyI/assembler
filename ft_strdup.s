global _ft_strdup
extern _malloc
extern _ft_strcpy
extern _ft_strlen

_ft_strdup:
	push rdi
	call _ft_strlen
	mov r9, rax
	inc r9
	mov rdi, r9
	call _malloc
	cmp rax, 0
	je .return
	mov rdi, rax
	pop r8
	mov rsi, r8
	call _ft_strcpy
.return:
	ret
