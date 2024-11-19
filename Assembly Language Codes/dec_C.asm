; 2022BCSE019
; Program to decrement number in 
; reg C and halt when it reaches 0

MVI C, 5          

START: DCR C      
       JNZ START

HLT
