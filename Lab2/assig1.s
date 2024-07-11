 AREA exp1, CODE, READONLY

 mov r1, #0x04			; Data (Change this for different test case)
 ands r1, r1, #0x01		; and masing with setting condition codes. Mask value is 0x03  "masking the last bit"
 moveq r2, #0x02
 movne r2, #0x01
e b e
 end 