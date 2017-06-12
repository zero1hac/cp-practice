	.file	"MUFFINS3.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%d"
.LC1:
	.string	"%lld"
.LC2:
	.string	"%lld\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB48:
	.cfi_startproc
	subq	$24, %rsp
	.cfi_def_cfa_offset 32
	leaq	4(%rsp), %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	4(%rsp), %eax
	leal	-1(%rax), %edx
	movl	%edx, 4(%rsp)
	testl	%eax, %eax
	je	.L2
.L3:
	leaq	8(%rsp), %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movq	8(%rsp), %rax
	movq	%rax, %rdx
	shrq	$63, %rdx
	addq	%rdx, %rax
	sarq	%rax
	leaq	1(%rax), %rdx
	movl	$.LC2, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movl	4(%rsp), %eax
	leal	-1(%rax), %edx
	movl	%edx, 4(%rsp)
	testl	%eax, %eax
	jne	.L3
.L2:
	movl	$0, %eax
	addq	$24, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE48:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
