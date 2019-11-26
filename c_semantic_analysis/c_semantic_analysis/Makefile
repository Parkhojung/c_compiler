CC = cc
LIBS = -ll
LEX = lex
YACC = yacc
CFLAGS = -DYYDEBUG=1
all: program

program: y.tab.c lex.yy.c
	$(CC) -o program y.tab.c lex.yy.c print.c main.c syntax.c semantic.c $(LIBS)
y.tab.c: parse.y
	$(YACC) -d parse.y
lex.yy.c : scan.l
	$(LEX) scan.l

.PHONY: all clean test

clean:
	-rm -f program lex.* y.* *.txt *.bak core*

