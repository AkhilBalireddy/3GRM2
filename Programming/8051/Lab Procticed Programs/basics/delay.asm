CSEG AT 0X123
delay:
MOV R0,#250
DJNZ R0,$

CSEG AT 0X0
MOV A,#0X12
ACALL delay
END