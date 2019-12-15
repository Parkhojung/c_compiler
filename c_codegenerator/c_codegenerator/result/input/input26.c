	      INT   0, 12
	      SUP   0, main
	      RET   0, 0
muitiply:
	      INT   0, 24
	      LDA   1, 20
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
L2:
	      LOD   1, 12
	      JPC   0, L3
	      LOD   1, 12
	     LITI   0, 2
	      MOD   0, 0
	      JPC   0, L4
	      LDA   1, 20
	      LOD   1, 20
	      LOD   1, 16
	     ADDI   0, 0
	      STX   0, 1
	      POP   0, 1
L4:
	      LDA   1, 12
	      LOD   1, 12
	     LITI   0, 2
	     DIVI   0, 0
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 16
	      LOD   1, 16
	     LITI   0, 2
	     MULI   0, 0
	      STX   0, 1
	      POP   0, 1
L1:
	      JMP   0, L2
L3:
	      LDA   1, -4
	      LOD   1, 20
	      STO   0, 1
	      RET   0, 0
	      RET   0, 0
main:
	      INT   0, 16
	      RET   0, 0
