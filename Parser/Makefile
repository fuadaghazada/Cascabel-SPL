cascabel: y.tab.c lex.yy.c
	    gcc -o parser y.tab.c
y.tab.c: cs315s18_group01.y lex.yy.c
	 yacc cs315s18_group01.y
lex.yy.c: cs315s18_group01.l
	  lex cs315s18_group01.l
clean:
	rm -f lex.yy.c y.tab.c parser
