	.file	"userprog1.c"
	.text
	.section	.rodata
.LC0:
	.string	"a + b = %u\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$5, -12(%rbp)
	movl	$10, -8(%rbp)
	movl	$0, -4(%rbp)
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %eax
#APP
# 9 "userprog1.c" 1
	movl $100, %edx
addl %edx,%eax
# 0 "" 2
#NO_APP
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
