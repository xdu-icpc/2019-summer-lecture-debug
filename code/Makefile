%.out: %.in %.cc gen.py
	./gen.py $< $@

.PHONY: clean
clean:
	rm -f gmon.out *.gcda *.gcno *.gcov a.out
