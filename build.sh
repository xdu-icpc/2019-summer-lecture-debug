make -C code \
	set_invalidate.out vec_invalidate.out matrix_bug.out pow_mod_bug.out \
	overflow.out scanf_bound.out scanf_bound_asan.out \
	vec_invalidate_debug.out bsearch_buggy.out bapc2018e-time.out \
	bapc2018e-gprof.out bapc2018e-gcov.out
latexmk --xelatex beamer
