
a.out: %.c
	$(CC) -o y.tab.c lex.yy.c main.c syntax.c print.c

.PHONY: all clean test

clean:
	-rm -f y.tab.h lex.yy.c a.out *.bak core*

