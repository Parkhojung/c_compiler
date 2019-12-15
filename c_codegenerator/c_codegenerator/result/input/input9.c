	      INT   0, 12
	      SUP   0, main
	      RET   0, 0
fun:
	      INT   0, 16
	      RET   0, 0
main:
	      INT   0, 12
	      INT   0, 12
	      POP   0, 3
	     ADDR   0, fun
	      CAL   0, 0
	      LDA   1, -4
	     LITI   0, 0
	      STO   0, 1
	      RET   0, 0
	      RET   0, 0
