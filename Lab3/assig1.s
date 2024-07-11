 AREA data,DATA,READONLY
value1 dcd 0x04

 AREA data2,DATA,READWRITE
result dcd 0x00

 AREA assig1,CODE, READONLY
 ldr r1,=value1
 ldr r2,=result
 ldr r3,[r1]
 ands r3,r3,#0x01
 moveq r3,#0x02
 movne r3,#0x01
 str r3,[r2]
e b e
 end