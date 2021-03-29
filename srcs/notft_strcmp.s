global	_ft_strcmp

section	.text
_ft_strcmp:
	mov		rax, 0
	mov		rdx, 0
	mov		rcx, 0
.loop:
	mov		al, [rdi]
	mov		dl, [rsi]
	cmp		al, 0
	jz		.subtract
	cmp		dl, 0
	jz		.subtract
	cmp		al, dl
	jnz		.subtract
	inc		rdi
	inc		rdi
	jmp		.compare
.subtract:
	sub		rax, rdx
	ret
