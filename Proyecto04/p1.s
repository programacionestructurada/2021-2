	.file	"p1.c"
	.globl	myconstant
	.section	.rodata
	.align 4
	.type	myconstant, @object
	.size	myconstant, 4
myconstant:
	.long	70
.LC0:
	.string	"%d\n"
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
	movl	$70, %eax
	movl	$55, %esi
	movl	%eax, %edi
	call	max@PLT
	movl	%eax, -4(%rbp)
	movl	$70, %eax
	movl	$100, %edx
	cmpl	$100, %eax
	cmovl	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 6.3.0-18+deb9u1) 6.3.0 20170516"
	.section	.note.GNU-stack,"",@progbits