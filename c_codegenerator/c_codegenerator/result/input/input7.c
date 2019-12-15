	      INT   0, 12
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 36
	      LDA   1, 32
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
L2:
	      LOD   1, 32
	     LITI   0, 5
	     LSSI   0, 0
	      JPC   0, L3
L1:
	      LDA   1, 32
	      LDX   0, 1
	     INCI   0, 0
	      STX   0, 1
	      POP   0, 1
	      JMP   0, L2
L3:
	      LDA   1, 32
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
L5:
	      LOD   1, 32
	     LITI   0, 5
	     LSSI   0, 0
	      JPC   0, L6
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
