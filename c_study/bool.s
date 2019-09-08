	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	L_.str(%rip), %rdi
	movl	$0, -4(%rbp)
	movl	$-2, -8(%rbp)
	cmpl	$-3, -8(%rbp)
	setg	%al
	andb	$1, %al
	movzbl	%al, %ecx
	cmpl	$0, %ecx
	setg	%al
	andb	$1, %al
	movzbl	%al, %esi
	movb	$0, %al
	callq	_printf
	leaq	L_.str(%rip), %rdi
	movl	$4294967293, %ecx       ## imm = 0xFFFFFFFD
	cmpl	-8(%rbp), %ecx
	setl	%dl
	andb	$1, %dl
	movzbl	%dl, %ecx
	cmpl	$0, %ecx
	setl	%dl
	andb	$1, %dl
	movzbl	%dl, %esi
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d\n"


.subsections_via_symbols
