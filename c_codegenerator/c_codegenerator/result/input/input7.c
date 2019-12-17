	      INT   0, 68
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 36
	      INT   0, 12
	      LDA   0, 12
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
	      LDA   1, 32
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
L2:
	      LOD   1, 32
	     LITI   0, 5
	     LSSI   0, 0
	      JPC   0, L3
	      LDA   1, 12
	      LOD   1, 32
	     LITI   0, 4
	     MULI   0, 0
	   OFFSET   0, 0
	      LOD   1, 32
	      STX   0, 1
	      POP   0, 1
L1:
	      LDA   1, 32
	      LDX   0, 1
	     INCI   0, 0
	      STX   0, 1
	      POP   0, 1
	      JMP   0, L2
L3:
	      INT   0, 12
	      LDA   0, 36
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
	      LDA   1, 32
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
L5:
	      LOD   1, 32
	     LITI   0, 5
	     LSSI   0, 0
	      JPC   0, L6
	      INT   0, 12
	      LDA   0, 60
	      LDA   1, 12
	      LOD   1, 32
	     LITI   0, 4
	     MULI   0, 0
	   OFFSET   0, 0
	      LDI   0, 1
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
L4:
	      LDA   1, 32
	      LDX   0, 1
	     INCI   0, 0
	      STX   0, 1
	      POP   0, 1
	      JMP   0, L5
L6:
	      LDA   1, -4
	     LITI   0, 0
	      STO   0, 1
	      RET   0, 0
	      RET   0, 0
.literal    12  "Enter 5 integers: "
.literal    36  "Displaying integers: "
.literal    60  "%d\n"
