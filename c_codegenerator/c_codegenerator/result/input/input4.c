	      INT   0, 20
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 20
	      LDA   1, 12
	      LDA   1, 12
	      LDI   0, 2
	     LITI   0, 10
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 12
	     LITI   0, 4
	   OFFSET   0, 0
	      LDA   1, 12
	      LDI   0, 2
	     LITI   0, 4
	   OFFSET   0, 0
	     LITI   0, 20
	      STX   0, 1
	      POP   0, 1
	      LDA   1, -4
	     LITI   0, 0
	      STO   0, 1
	      RET   0, 0
	      RET   0, 0
