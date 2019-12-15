	      INT   0, 12
	      SUP   0, main
	      RET   0, 0
max:
	      INT   0, 24
	      LOD   1, 12
	      LOD   1, 16
	     GTRI   0, 0
	      JPC   0, L1
	      LDA   1, 20
	      LOD   1, 12
	      STX   0, 1
	      POP   0, 1
	      JMP   0, L2
L1:
	      LDA   1, 20
	      LOD   1, 16
	      STX   0, 1
	      POP   0, 1
L2:
	      LDA   1, -4
	      LOD   1, 20
	      STO   0, 1
	      RET   0, 0
	      RET   0, 0
