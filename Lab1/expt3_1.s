 AREA expt1_3, CODE, READONLY
 mov r1, #0x1f
 mov r2, #0xff
 mov r3, #0x25
 mov r4, #0x13

 and r5, r1, r2
 mvn r6 , r3
 and r7, r6, r4
 orr r8, r5, r7

e b e
 end