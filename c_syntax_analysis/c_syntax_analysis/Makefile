all: y.tab.c lex.yy.c main.c syntax.c print.c
	cc -o y.tab.c lex.yy.c main.c syntax.c print.c

#lex.yy.c: scan.l
#    lex scan.l

#y.tab.c: parse.c
#    yacc parse.c

.PHONY: all clean test



clean:
	-rm -f y.tab.* lex.yy.c a.out *.txt *.bak core*

