.PHONY: all
all:
	./build.sh

.PHONY: clean
clean:
	make -C code clean
	latexmk --xelatex -c beamer
	rm -f *.xdv *.snm *.nav *.vrb
