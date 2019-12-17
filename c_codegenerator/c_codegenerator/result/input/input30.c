	      INT   0, 52
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 20
	      LDA   1, 12
	      LDA   1, 16
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 16
	     LITI   0, 3
	      STX   0, 1
	      POP   0, 1
	      INT   0, 12
	      LDA   0, 12
	      LDA   1, 16
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
	      INT   0, 12
	      LDA   0, 32
	      LOD   1, 12
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
	      LDA   1, -4
	     LITI   0, 0
	      STO   0, 1
	      RET   0, 0
	      RET   0, 0
.literal    12  "c address : %d\n "
.literal    32  "b value : %d\n"
