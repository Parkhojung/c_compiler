	      INT   0, 60
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 60
	      INT   0, 12
	      LDA   0, 12
	     LITI   0, 4
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
	      INT   0, 12
	      LDA   0, 28
	     LITI   0, 4
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
	      INT   0, 12
	      LDA   0, 44
	     LITI   0, 40
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
	      RET   0, 0
.literal    12  "a size: %d\n"
.literal    28  "b size: %d\n"
.literal    44  "c size: %d\n"
