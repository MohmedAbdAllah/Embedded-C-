	.file	"main.cpp"
	.text
.lcomm _ZStL8__ioinit,1,1
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "first element in arr: \0"
.LC1:
	.ascii "\12\0"
.LC2:
	.ascii "last element in arr: \0"
	.align 8
.LC3:
	.ascii "--------------------------------------------------------------------------\12\0"
.LC4:
	.ascii "size of arr: \0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2024:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$200, %rsp
	.seh_stackalloc	200
	leaq	192(%rsp), %rbp
	.seh_setframe	%rbp, 192
	.seh_endprologue
	call	__main
	movl	$1, -32(%rbp)
	movl	$2, -28(%rbp)
	movl	$3, -24(%rbp)
	movl	$4, -20(%rbp)
	movl	$5, -16(%rbp)
	movl	$6, -12(%rbp)
	movl	$7, -8(%rbp)
	movl	$8, -4(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movl	-32(%rbp), %eax
	movl	%eax, %edx
	call	_ZNSolsEi
	movq	%rax, %rcx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	call	_ZNSolsEi
	movq	%rax, %rcx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$1, -64(%rbp)
	movl	$2, -60(%rbp)
	movl	$3, -56(%rbp)
	movl	$4, -52(%rbp)
	movl	$5, -48(%rbp)
	movl	$6, -44(%rbp)
	movl	$7, -40(%rbp)
	movl	$8, -36(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt5arrayIiLy8EE5frontEv
	movl	(%rax), %eax
	movl	%eax, %edx
	movq	%rbx, %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt5arrayIiLy8EE4backEv
	movl	(%rax), %eax
	movl	%eax, %edx
	movq	%rbx, %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$8, %edx
	movq	%rax, %rcx
	call	_ZNSolsEy
	movq	%rax, %rcx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt5arrayIiLy8EE4sizeEv
	movq	%rax, %rdx
	movq	%rbx, %rcx
	call	_ZNSolsEy
	movq	%rax, %rcx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$1, -112(%rbp)
	movl	$2, -108(%rbp)
	movl	$3, -104(%rbp)
	movl	$4, -100(%rbp)
	movl	$5, -96(%rbp)
	movl	$6, -92(%rbp)
	movl	$7, -88(%rbp)
	movl	$8, -84(%rbp)
	movl	$9, -80(%rbp)
	movl	$1, -160(%rbp)
	movl	$2, -156(%rbp)
	movl	$3, -152(%rbp)
	movl	$4, -148(%rbp)
	movl	$5, -144(%rbp)
	movl	$6, -140(%rbp)
	movl	$7, -136(%rbp)
	movl	$8, -132(%rbp)
	movl	$9, -128(%rbp)
	movl	$0, %eax
	addq	$200, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt5arrayIiLy8EE5frontEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt5arrayIiLy8EE5frontEv
	.def	_ZNSt5arrayIiLy8EE5frontEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt5arrayIiLy8EE5frontEv
_ZNSt5arrayIiLy8EE5frontEv:
.LFB2289:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt5arrayIiLy8EE5beginEv
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt5arrayIiLy8EE4backEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt5arrayIiLy8EE4backEv
	.def	_ZNSt5arrayIiLy8EE4backEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt5arrayIiLy8EE4backEv
_ZNSt5arrayIiLy8EE4backEv:
.LFB2290:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt5arrayIiLy8EE3endEv
	subq	$4, %rax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt5arrayIiLy8EE4sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt5arrayIiLy8EE4sizeEv
	.def	_ZNKSt5arrayIiLy8EE4sizeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt5arrayIiLy8EE4sizeEv
_ZNKSt5arrayIiLy8EE4sizeEv:
.LFB2292:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$8, %eax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt5arrayIiLy8EE5beginEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt5arrayIiLy8EE5beginEv
	.def	_ZNSt5arrayIiLy8EE5beginEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt5arrayIiLy8EE5beginEv
_ZNSt5arrayIiLy8EE5beginEv:
.LFB2398:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt5arrayIiLy8EE4dataEv
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt5arrayIiLy8EE3endEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt5arrayIiLy8EE3endEv
	.def	_ZNSt5arrayIiLy8EE3endEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt5arrayIiLy8EE3endEv
_ZNSt5arrayIiLy8EE3endEv:
.LFB2399:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt5arrayIiLy8EE4dataEv
	addq	$32, %rax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt5arrayIiLy8EE4dataEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt5arrayIiLy8EE4dataEv
	.def	_ZNSt5arrayIiLy8EE4dataEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt5arrayIiLy8EE4dataEv
_ZNSt5arrayIiLy8EE4dataEv:
.LFB2469:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt14__array_traitsIiLy8EE6_S_ptrERA8_Ki
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt14__array_traitsIiLy8EE6_S_ptrERA8_Ki,"x"
	.linkonce discard
	.globl	_ZNSt14__array_traitsIiLy8EE6_S_ptrERA8_Ki
	.def	_ZNSt14__array_traitsIiLy8EE6_S_ptrERA8_Ki;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt14__array_traitsIiLy8EE6_S_ptrERA8_Ki
_ZNSt14__array_traitsIiLy8EE6_S_ptrERA8_Ki:
.LFB2524:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.text
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2560:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB2559:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L20
	cmpl	$65535, 24(%rbp)
	jne	.L20
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rax
	movq	%rax, %rcx
	call	atexit
.L20:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_main
_GLOBAL__sub_I_main:
.LFB2561:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders) 12.2.0"
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEy;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
